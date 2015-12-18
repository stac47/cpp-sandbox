#include <string>
#include <fstream>
#include <iostream>

class Matrix
{
    int **_m;
    int _width;
    int _height;
public:
    Matrix(): _m(nullptr), _width(0), _height(0) {}

    virtual ~Matrix()
    {
        for(int i=0; i < _height; ++i)
        {
            delete[] _m[i];
        }
        delete[] _m;
    }

    void dump() const
    {
        std::cout << "Matrix [height=" << _height << ", width=" << _width << "]" << std::endl;
        for (int i=0; i < _height; ++i)
        {
            for (int j=0; j < _width; ++j)
            {
                std::cout << _m[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    static Matrix LoadFromFile(const std::string& iFile)
    {
        Matrix ret = Matrix();
        std::ifstream infile(iFile);
        infile >> ret._height;
        infile >> ret._width;
        ret._m = new int*[ret._height];
        for (int i=0; i < ret._height; ++i)
        {
            ret._m[i] = new int[ret._width];
            for (int j = 0; j < ret._width; ++j)
            {
                infile >> ret._m[i][j];
            }
        }

        return ret;
    }
};

int main(int argc, const char* argv[])
{
    Matrix matrix = Matrix::LoadFromFile("matrix.txt");
    matrix.dump();
    return 0;
}

