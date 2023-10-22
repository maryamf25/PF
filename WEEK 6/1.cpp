#include <iostream>
using namespace std;

bool compare(int num1, int num2);

main()
{
    int num1, num2;
    int ans;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    ans = compare(num1, num2);
    cout << ans;
}
bool compare(int num1, int num2)
{

    if (num1 > num2)
    {
        return true;
    }
    else
    {
        return false;
    }
}