#include <iostream>
using namespace std;
void jazzifyChords(string chords[], int numChords);
void takeinput(int count);
main()
{
    int num;

    cout << "Enter the number of chords: ";
    cin >> num;
    if (num > 0)
    {
        takeinput(num);
    }
    else
    {
        cout << "Invalid input. Number of chords must be greater than 0.";
    }
}

void takeinput(int count)
{
    cout << "Enter " << count << " chords, one per line: " << endl;
    string arr[count];
    int i = 0;
    string input;
    while (i < count)
    {

        cin >> input;
        arr[i] = input;

        i++;
    }
    jazzifyChords(arr, count);
}
void jazzifyChords(string chords[], int numChords)
{
    cout << "Jazzified chords: [";
    for (int m = 0; m < numChords; m++)
    {

        int length = chords[m].length();
        if (chords[m][length - 1] != '7')
        {
            chords[m] += '7';
        }
        cout << chords[m];
        if (m != numChords - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
}
