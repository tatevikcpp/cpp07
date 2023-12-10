#include "iter.hpp"

int main()
{
    std::string arr1[] = {"lalala", "lalala", "lalala"};
    iter(arr1, 3, &print<std::string>);

    int arr2[] = {1, 2, 3};
    iter(arr2, 3, &print<int>);

    float arr3[] = {0.01, 0.02, 0.03};
    iter(arr3, 3, &print<float>);

    char arr4[] = {'x', 'y', 'z'};
    iter(arr4, 3, &print<char>);
    
    return (0);
}