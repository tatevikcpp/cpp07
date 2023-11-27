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

// template<>
// void iter<char>(char *arr, size_t length, void(func)(char&))
// {
//     for (size_t i = 0; i < length; ++i)
//         func(arr[i]);
//     // (void)arr;
//     // (void)func;
//     // (void)length;
//     // std::cout << "tox garsdbfnvdbfclgb\n";
// }

template<typename T>
void print(T& i)
{
    std::cout << i << std::endl;
}