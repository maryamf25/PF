#include <iostream>

using namespace std;

string calculateCost(float budget, string category, int numPeople);

main()
{
    float budget;
    string category, ans;
    int numPeople;

    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> numPeople;

    ans = calculateCost(budget, category, numPeople);
    cout << ans;
}

string calculateCost(float budget, string category, int numPeople)
{
    string result;
    float ticket_price;
    float spent;
    float amount_req;

    if (category == "VIP")
    {
        ticket_price = 499.99 * numPeople;
    }
    if (category == "Normal")
    {
        ticket_price = 249.99 * numPeople;
    }
    if (numPeople <= 4 && numPeople >= 1)
    {
        spent = 0.75 * budget;
    }
    if (numPeople <= 9 && numPeople >= 5)
    {
        spent = 0.60 * budget;
    }
    if (numPeople <= 24 && numPeople >= 10)
    {
        spent = 0.50 * budget;
    }
    if (numPeople <= 49 && numPeople >= 25)
    {
        spent = 0.40 * budget;
    }
    if (numPeople >= 50)
    {
        spent = 0.25 * budget;
    }

    amount_req = ticket_price + spent;
    if (amount_req < budget)
    {
        result = "Yes! You have " + to_string(budget - amount_req) + " leva left.";
    }
    if (amount_req >= budget)
    {

        result = "Not enough money! You need " + to_string(amount_req - budget) + " leva.";
    }
    return result;
}