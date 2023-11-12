#include <iostream>
using namespace std;
string remove(string userString);
bool isvowel(char);

main()
{
    string userString;
    cout << "Enter a string: ";
    getline(cin, userString);
    string statement = remove(userString);
    cout << "Result: " << statement;
}
bool isvowel(char character){

    
       if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' || character=='A' || character=='E' || character=='I' || character=='O'|| character=='U' ){
        return true;
       }
       else {
        return false;
       }
       
}


string remove(string userString)
{
    
    int length = userString.length();
    int j = 0;
    string result = "";
    
       
    while (j < length)
    {
       
        if(!(isvowel(userString[j]))){
            result+=userString[j];
        }
        if(result[j]==' ' && result[j+1]==' '){
            result[j]=result[j+1];
        }
        j++;
   }

       
return result;
       
}









    
    
    
    