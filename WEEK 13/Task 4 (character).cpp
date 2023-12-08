#include <iostream>
#include <fstream>
using namespace std;
main()
{
    char character;
    string path = "character.txt";
    fstream file;
    file.open(path, ios::in); 
    file >>  character;
    file.close();
    cout << "Character: " << character;
}