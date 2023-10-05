#include <iostream>
using namespace std;
string evenodd(int number);

main(){
    int number;
    cout<<"Enter a five-digit number: "; 
    cin>>number;
    string answer = evenodd( number);
    cout<< answer;
}
string evenodd(int number)
{
    string result;
    int sum ,num1,num2,num3,num4,num5,num6,num7,num8,num9;
    num1= number/10000;
	  num2= number%10000;
	  num3= num2/1000;
	  num4= number%1000;
	  num5= num4/100;
    num6= number%100;
    num7= num6/10;
    num8= number%10;
    num9= num8/1;
    sum= num1+num3+num5+num7+num9;
   
   if((sum%2)==0){
      result ="Evenish";
    }
    if((sum%2)!=0){
      result = "Oddish";
    }
  return result;
}