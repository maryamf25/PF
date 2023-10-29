#include <iostream>

using namespace std;

int total(int num1);
bool isPrime(int num);
int x = 1;

main()
{
    int num1;

    cout << "Enter Number: ";
    cin >> num1;

    bool result = isPrime(x);

    int result2 = total(num1);
    cout << result2;
}

bool isPrime(int num)
{

    if (num <= 1)
    {
        return false;
    }
    else
    {
        for (int x = 2; x <= num - 1; x++)
        {
            if (num % x == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int total(int num1)
{

    int count= 0;
    int j = 1;
    while (j <= num1)

    {

        if (isPrime(x))
        {

           count++;
           
           
        }
        j++;
        x++;
    }

    return count;
}