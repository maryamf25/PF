#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);
void saveToFile(string names[], int ages[], float matricMarks[],float fscMarks[], float ecatMarks[], int count, string fileName);
main()
{
    string fileName = "student.txt";
    int size=100;
    string names[size];
    int ages[size];
    float matricMarks[size];
    float fscMarks[size];
    float ecatMarks[size];
    int count = 0;
    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);
    saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, fileName);

}
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
{
    string Choice = "";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter student's name: ";
        cin.clear();
        cin.sync();
        getline(cin, names[i]);
        cout << "Enter student's age: ";
        cin >> ages[i];
        cout << "Enter student's Matric Marks: ";
        cin >> matricMarks[i];
        cout << "Enter student's Fsc Marks: ";
        cin >> fscMarks[i];
        cout << "Enter student's Ecat Marks: ";
        cin >> ecatMarks[i];
        cout << "Enter NO to stop or YES to continue: ";
        cin >> Choice;
        count++;
        if (Choice == "No" || Choice == "no")
        {
            break;
        }
        else if(Choice == "Yes" || Choice == "yes")
        {
            continue;
        }
    }
}
void saveToFile(string names[], int ages[], float matricMarks[],float fscMarks[], float ecatMarks[], int count, string fileName)
{
    fstream file;
    file.open(fileName, ios::out);
    for (int x = 0 ; x < count; x++)
    {
        file << "Name: " << names[x] << endl;
        file << "Age: " << ages[x] << endl;
        file << "Matric Marks: " << matricMarks[x] << endl;
        file << "Fsc Marks: " << fscMarks[x] << endl;
        file << "Ecat Marks: " << ecatMarks[x] << endl;
    }
    file.close();
}
