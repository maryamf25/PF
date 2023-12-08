#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string line;
    string path = "name.txt";
    fstream file;
    file.open(path, ios::in);
    getline(file, line);
    file.close();
    cout << "The line in file: " << line;
}