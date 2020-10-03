#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "This is a possible value of sentence";
    string secondWord = "EMPTY";

    string withoutFirstWord = sentence.substr(sentence.find(" ") + 1);
    secondWord = withoutFirstWord.substr(0, withoutFirstWord.find(" "));

    cout << secondWord << endl;
    return 0;
}