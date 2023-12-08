#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int integer;
    cout << "Enter an integer: ";
    cin >> integer;
    string path = "integer.txt";
    fstream file;
    file.open(path, ios::out); 
    file << integer ;
    file.close();
}