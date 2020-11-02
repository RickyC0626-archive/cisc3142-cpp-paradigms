#include <iostream>
#include "reverse.h"

int main()
{
    int intArr[] = {10, 20, 30, 40, 50};
    double doubleArr[] = {10.5, 20.5, 30.5, 40.5, 50.5, 60.5};
    std::string strArr[] = {"ABC", "DE", "FGHI", "JK"};

    std::cout << "Playing with int" << std::endl;
    std::cout << "Before: ";
    print<int>(intArr, 5);
    reverse<int>(intArr, 5);
    std::cout << std::endl;
    std::cout<<"After: ";
    print<int>(intArr, 5);
    std::cout << std::endl << std::endl;

    std::cout << "Playing with double" << std::endl;
    std::cout << "Before: ";
    print<double>(doubleArr, 6);
    reverse<double>(doubleArr, 6);
    std::cout << std::endl;
    std::cout << "After: ";
    print<double>(doubleArr, 6);
    std::cout << std::endl << std::endl;

    std::cout << "Playing with string" << std::endl;
    std::cout << "Before: ";
    print<std::string>(strArr, 4);
    reverse<std::string>(strArr, 4);
    std::cout << std::endl;
    std::cout << "After: ";
    print<std::string>(strArr, 4);

    return 0;
}