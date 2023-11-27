#pragma once
#include <iostream>

template<typename T>
class Array
{
    public:
        Array() : _size(0), _element(NULL) {/* std::cout << __PRETTY_FUNCTION__ << std::endl; */}
        Array(unsigned int n);
        Array(const Array& obj);
        ~Array();
        Array<T>& operator=(const Array& obj);
        T& operator[](unsigned int i) const;
        unsigned int size() const;
    private:
        unsigned int _size;
        T* _element;
};

template<typename T>
Array<T>::Array(unsigned int n)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->_element = new T[n];
    for (size_t i = 0; i < n; ++i)
    {
        this->_element[i] = 0;
    }
    this->_size = n;
}

// inch  vat baner klinen 
// template<typename T> 
// Array<T>::Array(unsigned int n)
// {
//     for (size_t i = 0; i < n; ++i)
//     {
//         this->_element = new T[i];
//     }
//     this->_size = n;
// }

template<typename T>
Array<T>::Array(const Array& obj)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->_element = new T[obj._size];
    for (size_t i = 0; i < obj._size; ++i)
    {
        this->_element[i] = obj._element[i];
    }
   this->_size = obj._size;
}

template<typename T>
Array<T>::~Array()
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    delete[] _element;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this != &obj)
    {
        if (this->_size == obj._size)
        {
            for (size_t i = 0; i < obj._size; ++i)
            {
                this->_element[i] = obj._element[i];
            }
        // this->_size = obj._size;
        }
        else
        {
            delete[] this->_element;
            this->_element = new T[obj._size];
            for (size_t i = 0; i < obj._size; ++i)
            {
                this->_element[i] = obj._element[i];
            }
            this->_size = obj._size;
        }
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int i) const
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (  i > this->_size - 1)
    {
        throw std::out_of_range ("out_of_range");
    }
    return (this->_element[i]);
}

template<typename T>
unsigned int Array<T>::size() const
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    return (this->_size);
}