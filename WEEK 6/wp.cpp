#include <iostream>
#include <string>
using namespace std;

string passOrfail(int marks);

int main()
{
    int score;

    cout << "Enter your score: ";
    cin >> score;

    cout << passOrfail(score);
    return 0;
}
string passOrfail(int marks)
{
    string result;
    if (marks > 50)
    {
        result = "You are Passed with " + to_string(marks) + " marks";
    }
    if (marks <= 50)
    {
        result = "You are Failed with " + to_string(marks) + " marks";
    }
    return result;
}