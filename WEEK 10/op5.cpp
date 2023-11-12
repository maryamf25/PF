#include <iostream>
using namespace std;
void takeinput(int);
bool isAlreadyEntered(int arr[], int size, int number);
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
    int numberArray[count], i = 0, k = 0;
    int input;
    string makeArray="";
    bool check;
    while (i < count)
    {

        cin >> numberArray[i];
        
        check = isAlreadyEntered(numberArray, i, numberArray[i]);

        if (check)
        {
            makeArray = makeArray +  to_string(numberArray[i]) + " ";
            
        }

         if (check)
        {
            cout << "Already Entered: " << numberArray[i] << endl;
        }

        i++;
    }

    cout << "Unique numbers entered: " << makeArray;
}
bool isAlreadyEntered(int arr[], int size, int number)
{

    int i = 0 ;
    for (int j = 0; j < size; j++)
    {

        if (number == arr[j])
        {
            i++;
        }
    }
    if(i>0){
        return true;
    }
    else { 
        return false;
    }
}
