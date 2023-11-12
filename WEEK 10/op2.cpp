#include <iostream>
using namespace std;
string ReverseWord(string);
main()
{
    string word;

    cout << "Enter a string: ";
    cin >> word;
    string reverse = ReverseWord(word);
    cout << "Reversed String: " << reverse;
}
string ReverseWord(string userString)
{

    int length = userString.length();
    int j = length-1;
    string result = "";
    while (j >= 0)
    {

        result += userString[j];

        j--;
    }

    return result;
}