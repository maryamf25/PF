#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string line;
    string path = "idc.txt";
    fstream file;
    file.open(path, ios::in);
    while (!file.eof())
    {
        getline(file, line);
        cout << line << endl;
    }
    file.close();
}