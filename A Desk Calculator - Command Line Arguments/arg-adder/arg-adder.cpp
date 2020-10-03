#include <iostream>
#include <stdlib.h>
#include <string>
#include <regex>

bool isNumber(std::string);

// Main with arguments
// argc - number of arguments
// argv - array of arguments
int main(int argc, char* argv[])
{
    try
    {
        int sum = 0;

        // Argument 0 is the command
        for(int i = 1; i < argc; i++)
        {
            if(!isNumber(argv[i])) throw std::string("Argument ") + std::to_string(i) + " is not a number";
            sum += std::stoi(argv[i]);
        }
        std::cout << sum << '\n';
    }
    catch(std::string message)
    {
        std::cerr << message << '\n';
        exit(1);
    }

    return 0;
}

bool isNumber(std::string num)
{
    // Check for digits and optional negative and floating point
    std::regex r("^-?\\d+");

    if(std::regex_match(num, r)) return true;
    return false;
}