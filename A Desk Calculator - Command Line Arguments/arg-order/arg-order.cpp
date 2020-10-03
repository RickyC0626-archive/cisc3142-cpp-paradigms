#include <iostream> // For output message
#include <string.h> // For strcmp function

// Main with arguments
// argc - number of arguments
// argv - array of arguments
int main(int argc, char* argv[])
{
    int i;

    // Don't start from 0 since it's the command itself
    for(i = 2; i < argc; i++)
    {
        // 0 if identical
        // > 0 if left has greater ASCII value than right
        // < 0 if left has lesser ASCII value than right
        if(strcmp(argv[i], argv[i - 1]) < 0) break;
    }
    // If there is a break then i won't be equal to argc, making it not in order
    int inOrder = (i == argc);
    printf(inOrder ? "IN ORDER\n" : "NOT IN ORDER\n");

    return 0;
}