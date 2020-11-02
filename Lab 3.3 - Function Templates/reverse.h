#include <iostream>

template <typename T>
void reverse(T arr[], int size)
{
    int i = 0, j = size - 1;
    T temp;

    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

template <typename T>
void print(T arr[], int size)
{
    std::cout << "{";

    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i];

        if(i != size - 1) std::cout << ", ";
    }
    std::cout << "}"; 
}