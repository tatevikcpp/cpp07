#include "iter.hpp"

int main()
{
    // Coords arr_c[3];
    // iter(arr_c, 3, &print<Coords>);

    std::string arr1[] = {"lalala", "lalala", "lalala"};
    iter(arr1, 3, &print<std::string>);

    int arr2[] = {1, 2, 3};
    iter(arr2, 3, &print<int>);

    float arr3[] = {0.01, 0.02, 0.03};
    iter(arr3, 3, &print<float>);

    char arr4[] = {'x', 'y', 'z'};
    iter(arr4, 3, &print<char>);


    // int &a = 10;
    // int a = 10;
    // int &   b = a;
    // int *c = &b;
    // &b = a; 

    return (0);
}


// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   char tabchr[] = { '0', '1', '2', '3', '4' };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );
//   iter( tab, 5, print);
//   iter( tabchr, 5, print);

//   return 0;
// }