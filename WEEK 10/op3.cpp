#include <iostream>
using namespace std;
string reverse(string userString);
main()
{
    string String;
    cout << "Enter a String: ";
    getline(cin, String);
    string result = reverse(String);
    cout << "Shifted String: " << result;
}
string reverse(string userString)
{
    int asciiCode = 0;
    string result = "";
    int length = userString.length();
    for (int i = 0; userString[i] != 0; i++)
    {

        asciiCode = userString[i];
        char ch = asciiCode;
        if (asciiCode == 122 || asciiCode == 90)
        {
            asciiCode = asciiCode - 26;
        }
        if (asciiCode != 32)
        {
            ch = asciiCode + 1;
        }
        result += ch;
    }
    return result;
}