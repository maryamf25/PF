#include <iostream>
using namespace std;
string dig2(int num2);
string dig1(int num1);
string number1(int number);
main(){
    int number,num1, num2,num3;
    string words;
    cout<<"Enter a number (1-99): "; 
    cin>>number;
   
    num1= number/10;
	num2= number%10;
       if(num1 == 1){
        string teen = number1(number);
        cout << teen;
    }
    if(num1 != 1){
       string first_number = dig1(num1);
        cout << first_number;
         string second_number= dig2(num2);
        cout<<second_number;
    }

}
    string dig2(int num2)
    {
    string number2;
	if(num2==1){
        number2 ="One";
       
    }
    if(num2==2){
       number2 ="Two";
     
    }
    if(num2==3){
        number2="Three";
       
    }
    if(num2==4){
          number2="Four";
         
    }
    if(num2==5){
          number2 ="Five";
         
    }
    if(num2==6){
          number2 ="Six";
        
    }
    if(num2==7){
          number2="Seven";
          
    }
     if(num2==8){
          number2 ="Eight";
          
    }  
     if(num2==9){
          number2 ="Nine";
         
    }    
       return number2;
    }      
    string dig1(int num1){
    string number1;
    if(num1==2){
        number1 ="Twenty";
       
    }
    if(num1==3){
        number1="Thirty";
       
    }
    if(num1==4){
          number1="Fourty";
         
    }
    if(num1==5){
          number1 ="Fifty";
         
    }
    if(num1==6){
          number1 ="Sixty";
        
    }
    if(num1==7){
          number1="Seventy";
          
    }
     if(num1==8){
          number1 ="Eighty";
          
    }  
     if(num1==9){
          number1 ="Ninety";
         
    }    
       return number1;



    }
    string number1(int number){
        string teens;
         
        if(number==10){
        teens= "Ten";
        }
        if(number==11){
        teens= "Eleven";
        }
         if(number==12){
        teens= "Twelve";
        }
         if(number==13){
        teens= "Thirteen";
        }
         if(number==14){
        teens= "Fourteen";
        }
         if(number==15){
        teens= "Fifteen";
        }
         if(number==16){
        teens= "Sixteen";
        }
         if(number==17){
        teens= "Seventeen";
        }
         if(number==18){
        teens= "Eighteen";
        }
         if(number==19){
        teens= "Nineteen";
        }
        return teens;
    }
    

 
    