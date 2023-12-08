#include <iostream>
using namespace std;

void Sum(int matrix[][5], int rowSize, int &col);
void printmatrix(int matrix[][5], int rowSize);
main()
{
    const int colSize = 5;
    int rowSize = 0;
    int matrix[100][5];
    int col =0;
    cout << "Enter row size: ";
    cin >> rowSize;
    cout << "Enter the elements of the matrix: " << endl;
      for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    cout << endl<< "Original Matrix:" << endl;
    printmatrix(matrix, rowSize);
    Sum(matrix, rowSize, col);
    cout << endl<< "Matrix after largest column moved to first:" << endl;
    printmatrix(matrix, rowSize);
}

void Sum(int matrix[][5], int rowSize, int &col)
{
    int sumArray[5];
    int colSwap;
    while (col < 5)
    {
        int sum = 0;
        for (int row = 0; row < rowSize; row++)
        {
            sum += matrix[row][col];
        }
        sumArray[col] = sum;
        col++;
    }
    for (int x = 0; x < 5; x++)
    {
         int count = 0;
        for (int i = 0; i < 5; i++)
        {   
            if (sumArray[x] < sumArray[i])
            {
                count++;
            }
        }
        if(count == 0)
        {
            for(int y = 0; y < rowSize; y++)
            {
                colSwap = matrix[y][x];
                matrix[y][x] = matrix[y][0];
                matrix[y][0] = colSwap;
            }
            break;
        }
   
    }
}
void printmatrix(int matrix[][5], int rowSize)
{
     for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}