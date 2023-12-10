#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr_1(5);

        for (int i = 0; i < 5; ++i)
        {
            arr_1[i] = i;
        }

        for (int k = 0; k < arr_1.size(); ++k)
        {
            std::cout << arr_1[k] << " ";
        }

        std::cout << std::endl;
        std::cout << "size_1 = "<< arr_1.size() <<std::endl;

        arr_1[0] = 5;
        std::cout << "size_1 = "<< arr_1.size() <<std::endl;
        for (int k = 0; k < arr_1.size(); ++k)
        {
            std::cout << arr_1[k] << " ";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   
}