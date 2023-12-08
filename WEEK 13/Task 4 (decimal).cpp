#include <iostream>
#include <fstream>
using namespace std;
main()
{
    float decimal;
    string path = "decimal.txt";
    fstream file;
    file.open(path, ios::in); 
    file >>  decimal;
    file.close();
    cout << "decimal: " << decimal;
}