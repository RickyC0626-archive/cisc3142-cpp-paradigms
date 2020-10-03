#include <iostream> // For general I/O
#include <fstream> // For file I/O
#include <cstdlib> // For exit function used in diagnostics
#include <string> // For custom exception messages

using namespace std;

const int ARR_LENGTH = 50;

void load(ifstream&, string[], int[], int);
void writeToFile(ofstream&, string[], int[], int);
void sort(string[], int[], int);
void swapElements(string[], int[], int, int);

int main()
{
    try
    {
        ifstream namesFile("names.data");
        ofstream outputFile("results.data");

        // If it fails to open, throw an exception with message
        if(namesFile.fail()) throw string("*** Exception *** input file names.data not found");

        string names[ARR_LENGTH];
        int ids[ARR_LENGTH];

        load(namesFile, names, ids, ARR_LENGTH);
        sort(names, ids, ARR_LENGTH);
        writeToFile(outputFile, names, ids, ARR_LENGTH);

        // Flush the files
        namesFile.close();
        outputFile.close();
    }
    catch(string message)
    {
        cerr << message << endl;
        exit(1);
    }
    return 0;
}

void load(ifstream& namesFile, string names[], int ids[], int arrLength)
{
    int nameCount = 0;
    int id = 1001;

    // Keep looping until end of file
    while(!namesFile.eof())
    {
        // Increment the name count by 1 and check if it is greater than 50 before reading in the value to the array
        // If it is greater than array length (50), throw an exception with message
        nameCount++;
        if(nameCount > arrLength) throw string("*** Exception *** array capacity exceeded");

        // Read the names and ids into their respective arrays
        namesFile >> names[nameCount - 1];
        ids[nameCount - 1] = id;
        id++;
    }
}

void writeToFile(ofstream& outputFile, string names[], int ids[], int arrLength)
{
    int recordsProcessed = 0;

    for(int i = 0; i < arrLength; i++)
    {
        if(names[i] != "")
        {
            outputFile << names[i] << " " << ids[i] << endl;
            recordsProcessed++;
        }
    }
    cout << recordsProcessed << " records processed" << endl;
}

void sort(string names[], int ids[], int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        // Instantiate index as smallest ASCII value for each iteration
        int smallest = i;

        for(int j = i + 1; j < arrLength; j++)
        {
            // Check if each element has smaller ASCII value than saved index
            if(names[j] < names[smallest]) smallest = j;
        }
        // Rearrange elements in ascending order
        swapElements(names, ids, smallest, i);
    }
}

void swapElements(string names[], int ids[], int smallest, int i)
{
    string temp = names[smallest];
    names[smallest] = names[i];
    names[i] = temp;

    int id = ids[smallest];
    ids[smallest] = ids[i];
    ids[i] = id;
}