#include <iostream>
#include <fstream>
using namespace std;
int countLines(string fileName);
main()
{
    
    string path = "idc.txt";
    int result = countLines(path);
    cout << "Total number of lines: " << result;
}
int countLines (string fileName)
{
    string line;
    int count=0;
    fstream file;
    file.open(fileName, ios::in);
    while (!file.eof())
    {
        getline(file, line);
        count++;
    }
    file.close();
    return count;
}