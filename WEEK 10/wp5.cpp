#include <iostream>
using namespace std;
main()
{
    int count;

    cout << "Enter numbers count: ";
    cin >> count;

    int numbers[count];
    for (int i = 0; i < numbers[count - 1]; i++)
    {

        cout << "Enter Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    for (int j = 0; j < numbers[count - 1]; j++)
    {
        cout << numbers[j] << endl;
    }
}