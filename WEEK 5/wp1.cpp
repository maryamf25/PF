#include <iostream>
using namespace std;

void add(int num1, int num2);

main(){
    int number1,number2;
    cout<<"Enter Number01: "; 
    cin>>number1;
    cout<<"Enter Number02: "; 
    cin>>number2;
    add(number1,number2);
}
    void add(int num1, int num2)
    {
    cout<< "Sum: " << num1 + num2;

    }