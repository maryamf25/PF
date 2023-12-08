#include <iostream>
using namespace std;

string splashOrBoom(string coordinates, string torpedo[5][5]);
main()
{
    const int colSize = 5;
    const int rowSize = 5;
    string coordinates;
    cout << "Enter coordinates to fire torpedo (e.g. , A1, B3, E5): ";
    cin >> coordinates;
    string torpedo[rowSize][colSize] = {
                                         { ".",".",".","*","*"},
                                         { ".","*",".",".","."},
                                         { ".","*",".",".","."},
                                         { ".","*",".",".","."},
                                         { ".",".","*","*","."},
                                        };
   string result =  splashOrBoom(coordinates, torpedo);
   cout << "Result: " << result;
}
string splashOrBoom(string coordinates, string torpedo[5][5])
{
    int idx = coordinates[1] - '0';
    if(coordinates[0]== 'A')
    {
        if(torpedo[0][idx-1] == ".")
        {
            return "splash";
        }
        else 
        {
            return "BOOM";
        }
    }
    else if(coordinates[0]== 'B')
    {
        if(torpedo[1][idx-1] == ".")
        {
            return "splash";
        }
        else
        {
            return "BOOM";
        }
    }
    else if(coordinates[0]== 'C')
    {
        if(torpedo[2][idx-1] == ".")
        {
            return "splash";
        }
        else
        {
            return "BOOM";
        }
    }
    else if(coordinates[0]== 'D')
    {
        if(torpedo[3][idx-1] == ".")
        {
            return "splash";
        }
        else
        {
            return "BOOM";
        }
    }
    else if(coordinates[0]== 'E')
    {
        if(torpedo[4][idx-1] == ".")
        {
            return "splash";
        }
        else
        {
            return "BOOM";
        }
    }
}