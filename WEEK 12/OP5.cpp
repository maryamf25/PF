#include <iostream>
using namespace std;

bool isIdentity(int matrix[][3], int rowSize); // function for checking if the given matrix is identity
bool takeInput(int colSize, int rowSize); //function for taking input bt using loop
main()
{
    const int colSize = 3;
    const int rowSize = 3;
    cout << "Enter the elements of the matrix: " << endl;
    if(takeInput(colSize, rowSize))
    {
    cout << "The entered matrix is an identity matrix.";
    }
    else
    {
    cout << "The entered matrix is NOT an identity matrix.";
    }
}
bool takeInput(int colSize, int rowSize)
{
    int matrix[3][3];
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    bool identity = isIdentity(matrix, rowSize);
    return identity;
}
bool isIdentity(int matrix[][3], int rowSize)
{
    int Diagonal = 0;
    int nondiagonal = 0;
    cout << "The matrix you entered is: " << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] <<"\t";
            if (row == col)
            {
                if (matrix[row][col] == 1) //condition for checking diagonal enteries
                {
                    Diagonal++; // increments if the diagonal enteries are 1
                }
            }
            else
            {
                if(matrix[row][col]==0) //condition for checking non-diagonal enteries
                {
                    nondiagonal++; //increments if the non-diagonal enteries are 0 
                }
            }
        }
        cout << endl;
    }
    
    if(Diagonal==3 && nondiagonal == 6)
    {
        return true;
    }
    else
    {
        return false;
    }

}