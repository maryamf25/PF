#include <iostream>
#include <fstream>
using namespace std;
main()
{
    float decimal;
    cout << "Enter a decimal: ";
    cin >> decimal;
    string path = "decimal.txt";
    fstream file;
    file.open(path, ios::out); 
    file <<  decimal <<endl;
    file.close();
}