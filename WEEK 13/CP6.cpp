#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
int countLines(string fileName);
main()
{
    string path = "task6.txt";
    int result = countLines(path);
    cout << "Total number of lines: " << result;
}
int countLines(string fileName)
{
    string line;
    int count = 0;
    fstream file;
    file.open(fileName, ios::in);
    getline(file, line);
    char character = tolower(line[0]);
    while (!file.eof())
    {
        getline(file, line);
        char lowerCase = tolower(line[0]);
        if (lowerCase != character)
        {
            count++;
        }
    }
    file.close();
    return count;
}