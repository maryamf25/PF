#include <iostream>

using namespace std;

string checkspeed(float speed);

main()
{
   float speed;
   string ans;

    cout << "Enter the speed: ";
    cin >> speed;

    ans = checkspeed(speed);
    cout <<ans;
}

string checkspeed(float speed)
{
    string result ;

    if (speed <= 10)
    {
        result = "slow";
    }
    if (speed > 10 && speed <= 50)
    {
        result = "average";
    }
    if (speed > 50 && speed <= 150)
    {
        result = "fast";
    }
    if (speed > 150 && speed <= 1000)
    {
        result = "ultra-fast";
    }
    if (speed > 1000)
    {
        result = "extremely fast";
    }
    return result;
    
   }