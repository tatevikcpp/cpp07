#pragma once
#include <iostream>

template<typename T, typename F>
void iter(T *arr, size_t length, void(func)(F&))
{
    for (size_t i = 0; i < length; ++i)
        func(arr[i]);
}


template<typename T>
void iter(T *arr, size_t length, void(func)(T&))
{
    for (size_t i = 0; i < length; ++i)
        func(arr[i]);
}

template<typename T>
void print(T& i)
{
    std::cout << i << std::endl;
}