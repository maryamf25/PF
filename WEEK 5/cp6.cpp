#include <iostream>
using namespace std;
string compare(char alphabet);

main(){
   char alphabet;
    cout<<"Enter a character (A/a): "; 
    cin>>alphabet;
  string ans = compare(alphabet);
   cout<< ans;
}
string compare(char alphabet)
{    string result;
    if(alphabet=='A'){
         result = "You have entered Capital A";
    }
      if(alphabet=='a'){
        result = "You have entered small a";
    }
   return result; 

}