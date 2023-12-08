#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int integer;
    string path = "integer.txt";
    fstream file;
    file.open(path, ios::in); 
    file >>  integer;
    file.close();
    cout << "integer: " << integer;
}