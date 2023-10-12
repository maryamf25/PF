#include <iostream>
using namespace std;

bool compare(int num);

main()
{
    int num;
    int ans;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    ans = compare(num);
    cout << ans;
}
bool compare(int num)
{

    int num1 = num / 100;
    int num2 = num % 100;
    int num3 = num2 / 10;
    int num4 = num2 % 10;
    int sum = num1 + num3 + num4;
    if ((num % 2) == 0)
    {
        if ((sum % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    if ((num % 2) != 0)
    {
        if ((sum % 2) != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
