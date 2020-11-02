#include <iostream>

template <class T>
class Simple
{
    private:
        T value;
    public:
        Simple<T>(T val);
        void setVal(T val);
        T getVal();
        void print();
};

template <class T>
Simple<T>::Simple(T val)
{
    value = val;
}

template <class T>
void Simple<T>::setVal(T val)
{
    value = val;
}

template <class T>
T Simple<T>::getVal()
{
    return value;
}

template <class T>
void Simple<T>::print()
{
    std::cout << value;
}