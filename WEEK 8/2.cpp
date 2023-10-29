#include <iostream>
using namespace std;

float damage(string yourType, string opponentType, float youAttcakPower, float opponentDefense);

main()
{
    string yourType, opponentType;
    float  youAttcakPower, opponentDefense;
    cout << "Enter your type: ";
    cin >> yourType;
    cout << "Enter opponent's type: ";
    cin >> opponentType;
    cout << "Enter your attack power: ";
    cin >> youAttcakPower;
    cout << "Enter opponent's defense power: ";
    cin >> opponentDefense;

    float output = damage(yourType, opponentType, youAttcakPower, opponentDefense);
    cout << output;
}
float damage(string yourType, string opponentType, float youAttcakPower, float opponentDefense)
{
    float effectiveness = 1;
    float damage = 50 * (youAttcakPower / opponentDefense) * effectiveness;

    float super = 2 * damage;
    float neutral = damage;
    float low = 0.5 * damage;

    if (yourType == "fire" && opponentType == "grass")
    {
        damage = super;
    }
    else if (yourType == "fire" && opponentType == "water")
    {
        damage = low;
    }
    else if ((yourType == "fire" && opponentType == "electric") || (yourType == "electric" && opponentType == "fire"))
    {
        damage = neutral;
    }
    else if (yourType == "water" && opponentType == "grass")
    {
        damage = low;
    }
    else if (yourType == "water" && opponentType == "electric")
    {
        damage = low;
    }
    else if ((yourType == "grass" && opponentType == "electric") || (yourType == "electric" && opponentType == "grass"))
    {
        damage = neutral;
    }
    if (yourType == "grass" && opponentType == "fire")
    {
        damage = low;
    }
    else if (yourType == "water" && opponentType == "fire")
    {
        damage = super;
    }
    else if (yourType == "grass" && opponentType == "water")
    {
        damage = super;
    }
    else if (yourType == "electric" && opponentType == "water")
    {
        damage = super;
    }
    return damage;
}
