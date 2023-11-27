#include "Array.hpp"

int main()
{
    // std::cout << "lalal\n";

    // Array<int> arr[5];

    // for (int i = 0; i < 5; ++i)
    // {
    //     arr[i] = i;
    // }

    // Array<int> arr_1[5];

    // arr_1 = arr;

    // Array<int> arr_w(5);

    // char str[] = "l";
    // // str[0] = 'b';
    // std::cout << str << std::endl;
    // Array<char> arr(1);
    // arr[0] = 'b';
    // arr_w.size() = 23;
    // std::cout << arr_w.size() << std::endl;
    // arr_w.size() = 12;


    // std::cout << "arr[0] =  "<< arr[0] <<std::endl;
    // std::cout << "size = "<< arr.size() <<std::endl;

    Array<int> arr_1(50);
    std::cout << "size_1 = "<< arr_1.size() <<std::endl;

    // arr = arr_1;
    
    arr_1 = arr;
    try
    {
        std::cout << arr_1[52];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "sizesdf = "<< arr_1.size() <<std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr_1[i];
    }
}