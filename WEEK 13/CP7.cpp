#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void displayWords(string fileName);
main()
{
    string path = "task7.txt";
    displayWords(path);
}
void displayWords(string fileName)
{
    string line;
    fstream file;
    file.open(fileName, ios::in);
    while (!file.eof())
    {
        getline(file, line);
        string word = "";
        for (int x = 0; x < line.length(); x++)
        {
            if (line[x] != ' ')
            {
                word += line[x];
            }
            else
            {
                if (word.length() < 4)
                {
                    cout << word << " ";
                }
                word = "";
            }
        }
        if (word.length() < 4)
        {
            cout << word << " ";
        }
    }
    file.close();
}