#include <iostream>

using namespace std;

float totalIncome(string screening, int rows, int cols);


main()
{
   float ans;
   string screening;
   int rows, cols;

    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> screening;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    ans = totalIncome(screening, rows, cols);
    cout <<ans;
}

float totalIncome(string screening, int rows, int cols)
{
    float result ;
    float price;
    float seats = rows*cols;
    if (screening == "Premiere")
    {
        price = 12.00;
    }
    if (screening == "Normal")
    {
        price = 7.50;
    }
    if (screening == "Discount")
    {
        price = 5.00;
    }
    result = seats * price;
    return result;
    
   }