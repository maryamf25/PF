#include <iostream>

using namespace std;

float discount(string day, string month, float price);

main()
{
    float price, ans;
    string day, month;

    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> price;

    ans = discount(day, month, price);
    cout << "Payable Amount after discount: " << ans;
}

float discount(string day, string month, float price)
{
    float result = price;

    if (day == "Sunday" && (month == "October" || month =="March" || month =="August"))
    {
        result = price - (price * 0.1);
    }
     return result;
   }
    

   
