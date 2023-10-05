#include <iostream>
using namespace std;

int myFunction(int number);

main(){
    int number,result;
    cout<<"Enter Number: "; 
    cin>>number;
   
    result = myFunction(number);
    cout<<result;
}
    int myFunction(int number)
    {
        int total= number*5;
        return total;
   

    }