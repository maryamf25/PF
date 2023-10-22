#include <iostream>
#include <cmath>
using namespace std;

int LCM(int number, int number2, int gcd);
int GCD(int number, int number2);
main()
{
    int number, number2;
    cout << "Enter the first number: ";
    cin >> number;
    cout << "Enter the second number: ";
    cin >> number2;

    int gcd = GCD(number, number2);
    int lcm = LCM(number, number2, gcd);

    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm;
}
int GCD(int number, int number2)
{
    int result1;
    while (number2 != 0)
    {
        result1 = number2;
        number2 = number % number2;
        number = result1;
    }
    return number;
}
int LCM(int number, int number2, int gcd)
{
    return (number * number2) / gcd;
}