#include <iostream>
using namespace std;
int findLargestNumber(int arr[], int size);
bool isAlreadyEntered(int arr[], int size, int number);
main()
{
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;
    if (num > 0)
    {
        cout << "Enter " << num << " numbers, one per line: " << endl;
        int numberArray[num], i = 0, input;
        string makeArray = "";
        bool check;
        while (i < num)
        {

            cin >> input;
            numberArray[i] = input;
            i++;
        }
        int result = findLargestNumber(numberArray, num);
        cout << "The largest number entered is: " << result;
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}

int findLargestNumber(int arr[], int size)
{
    int y = 0;

    int f = 0;

    int largest = 0;
    while (y < size)
    {
        int m = 0;
        for (f = 0; f < size; f++)
        {
            if (arr[y] > arr[f])
            {
                m++;
            }
        }
        if (m == size - 1)
        {

            largest = arr[y];
            return largest;
        }
        else
        {

            y++;
        }
    }
}