#include <iostream>
using namespace std;

bool isIdentical(int row, int matrix[][3], int rowSize);
main()
{
    const int colSize = 3;
    int rowSize = 0;
    int row=0; // row number to be passed to function (isIdentical)
    int total = 0; //variable to count total number of identical arrays
    int array[100][3];
    cout << "Enter the number of rows for the array: ";
    cin >> rowSize;
    cout << "Enter the elements of the array: " << endl;
    for (int row = 0; row < rowSize; row++) //loop for taking input
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> array[row][col];
        }
    }
    for(; row<rowSize;row++) //loop passing rows one by one to check if all the elements in row are identical
    {
        if( isIdentical(row, array,  rowSize))
        {
            total++; 
        }
    }
    cout << "The count of identical rows in the array is: " << total;
}

bool isIdentical(int row, int array[][3], int rowSize)// function checking the row is identical or not
{
    int count = 0;
        for (int col = 0; col < 2; col++)
        {
            if(array[row][col]== array[row][col+1])
            {
                count++; //increments if elements of given row are identical
            }
        }
        if(count == 2) // checking if 1 element of given row is identical to other 2 elements or not
        {
            return true;
        }
        else 
        {
            return false;
        }
}