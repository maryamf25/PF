#include <iostream>
using namespace std;

int printSum(int matrix[][3], int rowSize);
int takeInput(int colSize, int rowSize);
main()
{
    const int colSize = 3;
    int rowSize = 0;
    cout << "Enter the row size: ";
    cin >> rowSize;
    cout << "Enter the elements of the matrix: " << endl;
    int result = takeInput(colSize, rowSize);
    cout << "The sum of elements in the matrix is: " << result;
}
int takeInput(int colSize, int rowSize)
{
    int matrix [100][3];
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col]; 
        }
    }
    int sum = printSum(matrix, rowSize);
    return sum;
} 
int printSum(int matrix[][3], int rowSize)
{
    int sum = 0;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum += matrix[row][col];
        }
    }
    return sum;
}