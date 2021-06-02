#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP
# include <algorithm>

template <typename T1>
typename T1::iterator easyfind(T1 container, int  n)    // 중첩의존
{
    return (std::find(container.begin(), container.end(), n));
}

#endif