//Write a Program to read a text file and count number of characters in it
//220130318058
//krisha zalavadiya
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("test.txt");
    int count = 0;
    char c;
    while (file.get(c))
    {
        count++;
    }
    file.close();
    cout << "Number of characters in the file: " << count << endl;
    return 0;
}
