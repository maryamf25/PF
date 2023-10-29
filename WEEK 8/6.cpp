#include <iostream>
#include <cmath>
using namespace std;

long long pileCubes(long long);
main()
{
    long long volume;
    cout << "Enter the total volume of buildling: ";
    cin >> volume;

    long long result = pileCubes(volume);
    cout << result;
}
long long pileCubes(long long vol)
{

    long long sum = 0, n = 1;
    long long mul;
    while (sum < vol)
    {
        mul = n * n * n;

        sum = sum + mul;
        n++;
    }

    if (sum == vol)
    {
        return n - 1;
    }
    else
    {
        return -1;
    }
}