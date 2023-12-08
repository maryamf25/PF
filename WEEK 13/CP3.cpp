#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
int calculateFrequency(string fileName);
main()
{
    string path = "task2OP.txt";
    int result = calculateFrequency(path);
    cout << "Total number of Characters: " << result;
}
int calculateFrequency (string fileName)
{
    string line;
    int count=0;
    fstream file;
    file.open(fileName, ios::in);
    getline(file, line);
    char character = tolower(line[0]);
    while (!file.eof())
    {
        getline(file, line);
        for(int i=0; i < line.length(); i++)
        {
            char lowerCase = tolower(line[i]);
            if(lowerCase== character)
            {
                count++;
            }
        }
    }
    file.close();
    return count;
}