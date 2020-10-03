#include <iostream>
#include <stdlib.h>
#include <string>
#include <regex>

double calculate(std::string, char, std::string);
bool isNumber(std::string);
void removeSpaces(std::string);

// Main with arguments
// argc - number of arguments
// argv - array of arguments
int main(int argc, char* argv[])
{
    try
    {
        if(argc < 4) throw std::string("Usage: ") + argv[0] + " <number> <operator> <number>";

        // Argument 0 is the command
        // Arguments 1 and 3 are the numbers
        // Argument 2 is the operator
        std::string op = argv[2];

        // Check if op is equal to current directory name (since we're using *)
        // std::string pwd = getenv("PWD");
        // if(op == pwd.substr(pwd.find(op))) op = "*";

        std::string num1 = argv[1];
        std::string num2 = argv[3];

        std::cout << num1 << " " << op[0] << " " << num2 << '\n';

        std::cout << calculate(num1, op[0], num2) << '\n';
    }
    catch(std::string message)
    {
        std::cerr << message << '\n';
        exit(1);
    }

    return 0;
}

double calculate(std::string num1, char op, std::string num2)
{
    if(!isNumber(num1) || !isNumber(num2)) throw std::string("Argument 1 or 3 is not a number");
    removeSpaces(num1);
    removeSpaces(num2);

    switch(op)
    {
        case '+':
            return stod(num1) + stod(num2);
        case '-':
            return stod(num1) - stod(num2);
        case '*':
        case 'x':
            return stod(num1) * stod(num2);
        case '/':
            return stod(num1) / stod(num2);
        default:
            throw std::string("Argument 2 is not a valid operator (+, -, x, /)");
    }
}

bool isNumber(std::string num)
{
    // Check for digits and optional negative and floating point
    std::regex r("^-?\\d*\\.?\\d+");

    if(std::regex_match(num, r)) return true;
    return false;
}

void removeSpaces(std::string s)
{
    int count = 0;

    for(int i = 0; s[i]; i++)
    {
        if(s[i] != ' ') s[count++] = s[i];
    }
    s[count] = '\0';
}