#include <iostream>
using namespace std;
bool isSpecialArray(int arr[], int num);

void takeinput(int count);

main()
{
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;
    if (num > 0)
    {
        takeinput(num);
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}

void takeinput(int count)
{
    cout << "Enter " << count << " numbers, one per line: " << endl;
    int arr[count], i = 0;
    int input;
    int makeArray[count];
    bool check;
    while (i < count)
    {

        cin >> input;
        arr[i] = input;

        i++;
    }
    check = isSpecialArray(arr, count);
    if (check == 1)
    {
        cout << "The array is special";
    }
    else if (check == 0)
    {
        cout << "The array is not special";
    }
}

bool isSpecialArray(int arr[], int num)
{
    for (int m = 0; m < num; m++)
    {
        if (m % 2 == 0)
        {
            if (arr[m] % 2 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (arr[m] % 2 != 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}