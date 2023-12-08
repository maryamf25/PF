#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string idc;
    string path = "idc.txt";
    fstream file;
    file.open(path, ios::in);
    getline(file, idc);
    file.close();
    cout << "The numbers in file: " << idc;
}