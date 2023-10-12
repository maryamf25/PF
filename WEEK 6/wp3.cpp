#include <iostream>
using namespace std;

string canBuyDress(float dressCost, string brand);

int main()
{
    float dressCost;
    string brand;
    // Prompt the user for input
    cout << "Enter the dress cost: ";
    cin >> dressCost;

    cout << "Enter the dress brand: ";
    cin >> brand;
    // Call the function to check if the user can buy a dress
    cout << canBuyDress(dressCost, brand);
    return 0;
}
// Function to determine if the user can buy a dress
string canBuyDress(float dressCost, string brand)
{
    string result;
    if (dressCost < 1500.0)
    {
        if (brand == "MTJ")
        {
            return "Congratulations! You can buy the dress.";
        }

        return "Sorry, the dress doesn't meet the criteria for purchase.";
    }
}