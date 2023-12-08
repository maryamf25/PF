#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;
int countLines(string fileName);
main()
{
    int ans =
     countLines("task6.txt");
    cout << "The total number of lines: " << ans;
}
int countLines(string path)
{
    int count = 0;
    string line;
    fstream file;
    file.open(path, ios::in);
    getline(file, line);
    char required = tolower(line[0]);
    while (!file.eof())
    {
        getline(file, line);
        char check = tolower(line[0]);
        if (required != check)
        {
            count++;
        }
    }
    file.close();
    return count;
}