#include <iostream>
#include <cmath>
using namespace std;

string name(char gender, float age);

main()
{
    char gender;
    float age;
    string ans;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;

    ans = name(gender, age);
    cout << "Your personal title is: " << ans;
}

string name(char gender, float age)
{
    string result;

    if (age < 16 && gender == 'm')
    {
        result = "Master";
    }
    if (age >= 16 && gender == 'm')
    {
        result = "Mr.";
    }
    if (age < 16 && gender == 'f')
    {
        result = "Miss";
    }
    if (age >= 16 && gender == 'f')
    {
        result = "Ms.";
    }
    return result;
}