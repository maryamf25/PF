#include <iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size);

main()
{
    int size;

    cout << "Enter the number of resistors in the series circuit: ";
    cin >> size;
    if (size > 0)
    {
        cout << "Enter the resistance values (in ohms) of the " << size << " resistors, one per line: " << endl;
        double numberArray[size], input;
        int i = 0;
        while (i < size)
        {

            cin >> input;
            numberArray[i] = input;
            i++;
        }
        double result = calculateTotalResistance(numberArray, size);
        cout << "The total resistance of the series circuit is " << result << " ohms.";
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}
double calculateTotalResistance(double resistance[], int size)
{

    double sum = 0.0;
    for (int m = 0; m < size; m++)
    {
        sum = sum + resistance[m];
    }

    return sum;
}