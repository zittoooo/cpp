#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>

template<typename T>
class Array{
 private:
    T *arr;
    unsigned int _size;
    class OutOfRangeException : public std::exception
    {
        const char * what() const throw() { return "out of range\n"; }
    };
 public:
    Array()
    {
        arr = NULL;
        _size = 0;
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
        return (*this);
    }
    T& operator[] (unsigned int n)
    {
        if (n >= _size)
            throw OutOfRangeException();
        return (arr[n]);
    }
    const T& operator[] (unsigned int n) const
    {
        if (n >= _size)
            throw OutOfRangeException();
        return (arr[n]);
    }
    unsigned int size(void) const
    {
        return (_size);
    }
};

#endif