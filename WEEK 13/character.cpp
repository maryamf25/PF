#include <iostream>
#include <fstream>
using namespace std;
main()
{
    char character;
    cout << "Enter a character: ";
    cin >> character;
    string path = "character.txt";
    fstream file;
    file.open(path, ios::out); 
    file <<  character <<endl;
    file.close();
}