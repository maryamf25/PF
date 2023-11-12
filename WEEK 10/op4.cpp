#include <iostream>
using namespace std;
void numbers(int);
main()
{
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;
    if(num>0){
        numbers(num);
    }
    else{
        cout << "Invalid input. Number of elements must be greater than 0.";
    }

    
}

void numbers(int count)
{
    cout << "Enter " << count << " numbers, one per line: " << endl;
    int numberArray[count], i = 0;
    int j = count - 1;
    while (count > 0)
    {
        cin >> numberArray[i];

        i++;
        count--;
    }
    cout << "Numbers in reverse order: ";
    while (j >= 0)
    {

        cout << numberArray[j] << " ";

        j--;
    }
}