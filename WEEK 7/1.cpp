#include <iostream>
using namespace std;

void table(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    table(number);
    
}
void table(int number)
{
    for(int x =1; x<=10; x++){
        cout << number << " x " << x << " = "<< number*x << endl;
    }
}