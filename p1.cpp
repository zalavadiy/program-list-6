//Writing to a text file test.txt using C++ FileStream Programming.
//220130318058
//krisha zalavadiya
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("test.txt");
    file << "Hello" << endl;
    file << "My name is Krisha zalavadiya." << endl;
    file.close();
    cout << "Data has been written to the file." << endl;
    return 0;
}
