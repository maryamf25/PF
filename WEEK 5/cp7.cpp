#include <iostream>
using namespace std;
string IsSymmetrical(int number);

main(){
    int number;
    cout<<"Enter a three-digit number: "; 
    cin>>number;
   string answer =IsSymmetrical(number);
   if(answer=="True"){
    cout<<"The number is symmetrical.";
   }
   if(answer=="False"){
    cout<<"The number is not symmetrical.";
   }
}
string IsSymmetrical(int number)
{  string result;
    int reverse ,num1,num2,num3,num4,num5;
    num1= number/100;
	num2= number%100;
	num3= num2/(10);
	num4= number%10;
	num5= num4/1;
    
   
   if(num5==num1){
      result = "True";
    }
    if(num5!=num1){
       result = "False";
    }
  return result;
}