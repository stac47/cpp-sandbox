#include <signal.h>
#include <setjmp.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


class A {
public:
    A() {
        Sa_.sa_sigaction = handler;
        sigemptyset(&Sa_.sa_mask);
        Sa_.sa_flags = SA_SIGINFO;
        if (sigaction(SIGSEGV, &Sa_, NULL) != 0 ) {
            puts("Failed to set longjump signal handler for SIGSEGV");
            exit(1);
        }
    }

    ~A() {
        puts("A::~A()");
        Sa_.sa_handler = SIG_DFL;
        sigemptyset(&Sa_.sa_mask);
        Sa_.sa_flags = SA_SIGINFO;
        if (sigaction(SIGSEGV, &Sa_, NULL) != 0 ) {
            puts("Failed to set the default signal handler for SIGSEGV");
            exit(1);
        }
    }

    inline void triggerSigsegvs(bool really, unsigned count) const {
        for (unsigned i = 0; i < count; ++i) {
            triggerSigsegv(really);
        }
    }

    inline void triggerSigsegv(bool really) const {
        if (sigsetjmp(Env_, 1) == 0) {
            CanJump_ = 1;
            int* ptr = NULL;
            if (really) {
                puts("Will trigger a SIGSEGV");
                *ptr = 12;
            } else {
                puts("Not the guts ?");
            }
        }
        else {
            puts("After long jump");
        }

    }

private:
    static void handler(int sig, siginfo_t* info, void* /* ucontext */) {
        printf("Received signal: %d\n", sig);
        if (CanJump_ == 0) {
            puts("The function sigsetjmp has never been executed before");
            return;
        }
        printf("You tried to access the address: %p\n", info->si_addr);
        siglongjmp(Env_, 1);
    }

    static struct sigaction Sa_;
    static sigjmp_buf Env_;
    static volatile sig_atomic_t CanJump_;
};

volatile sig_atomic_t A::CanJump_ = 0;
struct sigaction A::Sa_;
sigjmp_buf A::Env_;

void f() {
    {
        A a;
        a.triggerSigsegvs(false, 10);
        a.triggerSigsegvs(true, 10);
    }
    {
        A a;
        a.triggerSigsegvs(true, 10);
    }
}

int main(int, char *[])
{
    puts("Entering f()");
    f();
    puts("Out of f()");
    int* ptr = NULL;
    puts("Triggering a last SIGSEGV");
    *ptr = 0xDEADBEEF;
    return 0;
}
