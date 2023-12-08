#include <iostream>
using namespace std;

void displayWorld();
void setGravityStatus(bool);
void timeTick(int);

bool gravity = false;
char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};
main()
{
    displayWorld();
    // setGravityStatus(true);
    timeTick(2);
    displayWorld();
}
void displayWorld()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << objects[row][col] << "\t";
        }
        cout << endl;
    }
}
void timeTick(int tick)
{
    char swap;
    for (int t = 0; t < tick; t++)
    {
        for (int col = 0; col < 5; col++)
        {
            for (int row =4; row > 0; row--)
            {
                swap = objects[row-1][col];
                objects[row-1][col] = objects[row][col];
                objects[row][col]=swap;
            }
        }
    }
    cout << endl;
}