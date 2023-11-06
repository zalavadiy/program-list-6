//Reading from a text file test.txt using C++ FileStream Programming
//220130318058
//krisha zalavadiya
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream file("test.txt");
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
    return 0;
}
