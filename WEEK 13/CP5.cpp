#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName);
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName);
main()
{
    string fileName = "task5.txt";
    string fileName2 = "topperStudents.txt";
    int size = 100;
    string names[size];
    int adNumbers[size];
    float percentages[size];
    int count = 0;
    getStudentDetails(names, adNumbers, percentages, size, count, fileName);
    saveToFile(names, adNumbers, percentages, count, fileName2);
}
void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName)
{
    string percentage, adNumber;
    fstream file;
    file.open(fileName, ios::in);
    for(int i = 0; !file.eof(); i++)
    {
        getline(file, names[i]);
        getline(file, adNumber);
        adNumbers[i] = stoi(adNumber);
        getline(file, percentage);
        percentages[i] = stof(percentage);
        count++;
        cout << names[i] << endl << adNumbers[i] << endl << percentages[i];
    }
    file.close();
}
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName)
{
    fstream file;
    file.open(fileName, ios::out);
    for (int x = 0; x < count; x++)
    {
        if (percentages[x] > 70)
        {
            file << "Name: " << names[x] << endl;
            file << "Admission Number: " << adNumbers[x] << endl;
            file << "Percentage: " << percentages[x] << endl << endl;
        }
    }
    file.close();
}
