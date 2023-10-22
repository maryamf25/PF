#include <iostream>
using namespace std;

int totalDigits(int num);
main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int ans = totalDigits(num);
    cout << "Total number of digits: " << ans;
}
int totalDigits(int num)
{
    int dig = 0;
    int num2 = 10;
    int num3 = 1;
    int num1 = 1;
    if (num == 0)
    {
        dig = 1;
        return dig;
    }
    num1 = num % num2;
    while (num1 == 0)

    {

        num1 = num % num2;
        num1 = num1 / num3;
        num2 = num2 * 10;
        num3 = num3 * 10;
        dig++;
    }

    num1 = num;
    while (num1 != 0)

    {

        num1 = num % num2;
        num1 = num1 / num3;

        num2 = num2 * 10;
        num3 = num3 * 10;
        dig++;
    }
    dig = dig - 1;
    return dig;
}