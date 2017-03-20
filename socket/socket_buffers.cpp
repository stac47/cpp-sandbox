#include <sys/types.h>
#include <sys/socket.h>

#include <iostream>

int main(int argc, const char *argv[])
{
    unsigned int m = sizeof(unsigned);

    int fdsocket = socket(AF_INET, SOCK_STREAM, 0);

    int aRcvBufSize = 0;
    int aSndBufSize = 0;
    getsockopt(fdsocket, SOL_SOCKET, SO_RCVBUF, (void *)&aRcvBufSize, &m);
    getsockopt(fdsocket, SOL_SOCKET, SO_SNDBUF, (void *)&aSndBufSize, &m);
    std::cout << "Before:" << std::endl;
    std::cout << "SO_RCVBUF: " << aRcvBufSize << std::endl;
    std::cout << "SO_SNDBUF: " << aSndBufSize << std::endl;

    aRcvBufSize = 1;
    setsockopt(fdsocket, SOL_SOCKET, SO_RCVBUF, (void *)&aRcvBufSize, m);
    aSndBufSize = 1;
    setsockopt(fdsocket, SOL_SOCKET, SO_SNDBUF, (void *)&aSndBufSize, m);

    std::cout << "After setsockopt:" << std::endl;
    getsockopt(fdsocket, SOL_SOCKET, SO_RCVBUF, (void *)&aRcvBufSize, &m);
    getsockopt(fdsocket, SOL_SOCKET, SO_SNDBUF, (void *)&aSndBufSize, &m);
    std::cout << "SO_RCVBUF: " << aRcvBufSize << std::endl;
    std::cout << "SO_SNDBUF: " << aSndBufSize << std::endl;
    return 0;
}
