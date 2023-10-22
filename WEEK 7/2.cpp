#include <iostream>
using namespace std;

void generateFibonacci(int length);
main()
{
    int length;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    generateFibonacci(length);
}
void generateFibonacci(int length)
{
    int num1 = 0;
    int num2 = 1;
    int next;

    for (int x = 0; x < length; x++)
    {
        if (x <= 1)
        {
            next = x;
        }
        else
        {
            next = num1 + num2;
            num1 = num2;
            num2 = next;
        }
        cout << next ;
        if(x < length-1)
        {
            cout << ", ";
        }
    }
}