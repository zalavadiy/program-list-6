//Write a C++ Program to read a text file and copy it to another text file
//220130318058
//krisha zalavadiya
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream testFile("test.txt");
    if (!testFile)
    {
        cerr << "Failed to open the input file." << endl;
        return 1;
    }
    ofstream outputFile("file.txt");
    if (!outputFile)
    {
        cerr << "Failed to open the output file." << endl;
        testFile.close();
        return 1;
    }
    string line;
    while (getline(testFile, line))
    {
        outputFile << line << endl;
    }
    testFile.close();
    outputFile.close();
    cout << "File copied successfully." << endl;
    return 0;
}