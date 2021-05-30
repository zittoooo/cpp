#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdexcept>

template<typename T>
class Array{
 private:
    T *arr;
    unsigned int _size;

 public:
    Array()
    {
        arr = new T[0];
        _size = 1;
    }
    Array(unsigned int n)
    {
        arr = new T[n];
        _size = n;
        for (unsigned int i = 0; i < n; i++)
            arr[i] = T();
    }
    Array(const Array& array)
    {
        *this = array;
    }
    ~Array()
    {
        delete[] arr;
    }
    Array& operator= (const Array& array)
    {
        delete[] arr;
        _size = array._size;
        arr = new T[array._size];
        for (unsigned int i = 0; i < array._size; i++)
        {
            arr[i] = array.arr[i];
        }
        return *this;
    }
    T& operator[] (unsigned int n)
    {
        if (n >= _size)
            throw std::out_of_range("out of range\n");
        return (arr[n]);
    }
    const T& operator[] (unsigned int n) const
    {
        if (n >= _size)
            throw std::out_of_range("out of range\n");
        return (arr[n]);
    }
    unsigned int& size(void) const
    {
        return (_size);
    }
};

#endif