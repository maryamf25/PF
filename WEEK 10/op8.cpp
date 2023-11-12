#include <iostream>
using namespace std;
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize);

main()
{
    int firstArraySize,   secondArraySize;

    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> firstArraySize;
    int firstArray[firstArraySize];
    if(firstArraySize<=2){
    
        cout << "Enter " << firstArraySize << " elements for the first array, one per line: " << endl;
        int  input1;
        int i = 0;
        while (i < firstArraySize)
        {

            cin >> input1;
            firstArray[i] = input1;
            i++;
        }
        
    }
    else
    {
        cout << "Invalid input. Number of elements for the first array must be 2.";
    }
     cout << "Enter the number of elements for the second array: ";
    cin >> secondArraySize;
    int secondArray[secondArraySize];
    if(secondArraySize>0){
    
        cout << "Enter " << secondArraySize << " elements for the second array, one per line: " << endl;
        int  input2;
        int j = 0;
        while (j < secondArraySize)
        {

            cin >> input2;
            secondArray[j] = input2;
            j++;
        }
        
    }
    else
    {
        cout << "Invalid input. Number of elements for the second array must be greataer than 0.";
    }
    insertArrayInMiddle( firstArray,  firstArraySize,  secondArray,  secondArraySize);
       
}
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{

    
    int combinedArraySize = firstArraySize+secondArraySize;
    int combinedArray[combinedArraySize];
    int f=0;
    combinedArray[f]= firstArray[f];
    combinedArray[combinedArraySize]= firstArray[firstArraySize-1];
    cout << "Resulting array: [" << firstArray[f] << ", ";
    for (int m = 1; m <= secondArraySize ; m++)
    {
        combinedArray[m]=secondArray[f];
        cout << combinedArray [m] << ", ";
        f++;
        }
        cout  << firstArray[firstArraySize-1] << "]";

    
}