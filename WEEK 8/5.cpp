#include <iostream>

using namespace std;

int isPrime(int num);

string howBad(int population);

int binary(int number);

main()
{
    int num1, number;

    cout << "Enter Number: ";
    cin >> number;
    int binaryResult = binary(number);

    string output = howBad(binaryResult);
    cout << output;
}

int isPrime(int num)
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

string howBad(int population)
{
    string badness;

    if (population % 2 == 0)
    {
        badness = "Evil";
        if (isPrime(population))
        {
            badness = "Evil, Pernicious";
        }
    }
    if (population % 2 != 0)
    {
        badness = "Odious";
        if (isPrime(population))
        {
            badness = "Odious, Pernicious";
        }
    }

    return badness;
}

int binary(int number)
{
    int b = 0;
    int count = 0;
    while (number >= 1)
    {

        if (number % 2 == 1)
        {
            b = 1;
            count = count + 1;
        }
        if (number % 2 == 0)
        {
            b = 0;
        }
        number = number / 2;
    }
    return count;
}
