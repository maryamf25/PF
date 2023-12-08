#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int countCharacters(string fileName);
main()
{
    
    string path = "task2OP.txt";
    int result = countCharacters(path);
    cout << "Total number of Characters: " << result;
}
int countCharacters (string fileName)
{
    string line;
    int count=0;
    fstream file;
    file.open(fileName, ios::in);
    while (!file.eof())
    {
        getline(file, line);
        count+= line.length();
    }
    file.close();
    return count;
}