#ifndef ITER_HPP
# define ITER_HPP

template<typename Arr, typename Size, typename Func>
void iter(Arr *arr, Size size, Func *func )
{
    for (Size i = 0; i < size ;i++)
    {
        func(arr[i]);
    }
}

#endif