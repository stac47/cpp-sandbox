#include <memory>
#include <iostream>

// API

struct Env
{
};

struct Writer
{
    ~Writer()
    {
        std::cout << "Writer::~Writer()" << std::endl;
    }
};

struct Output
{
    Output(Writer * iWriter, Env * iEnv)
      : _writer(iWriter), _env(iEnv) {}

    Writer* _writer;
    Env * _env;
};

void free_output(Output* iOutput)
{
    if (iOutput->_writer)
    {
        delete iOutput->_writer;
        std::cout << "free_output delete a Writer" << std::endl;
    }
}

void free_writer(Writer * iWriter)
{
    delete iWriter;
}

// Client code

struct WriterDeleter
{
    WriterDeleter(Env * env) : _env(env) {}
    void operator()(Writer * w)
    {
        free_writer(w);
    }
private:
    Env * _env;
};

struct OutputDeleter
{
    OutputDeleter(Env * env) : _env(env) {}
    void operator()(Output * o)
    {
        o->_writer = nullptr;
        free_output(o);
    }
private:
    Env * _env;
};


int main(int argc, const char * argv[])
{
    auto aEnv = std::make_unique<Env>();
    auto aWriter = std::unique_ptr<Writer, WriterDeleter>(
        new Writer(), WriterDeleter(aEnv.get())
    );
    auto aOutput = std::unique_ptr<Output>(
        new Output(aWriter.get(), aEnv.get())
    );
    return 0;
}
