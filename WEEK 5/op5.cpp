#include <iostream>
#include<cmath>
using namespace std;

float roots(float a, float b, float c);

main(){
    float a,b,c ,result;
    cout<<"Enter the value of a: "; 
    cin>>a;
    cout<<"Enter the value of b: "; 
    cin>>b;
    cout<<"Enter the value of c: "; 
    cin>>c;
    roots(a,b,c);
}
   float roots(float a, float b, float c)
    {      
            float root1,root2,root;
            float disc = pow(b,2)-(4*a*c);
           
           
            if(disc>0){
                 root1 = ((-b + (sqrt(disc)))/ (2*a));
                 root2 = ((-b -( sqrt(disc)))/ (2*a));
                 cout<< "Solutions: x = " << root1<< " and x = " << root2;
            }
             if(disc==0){
                 root1 = -b/(2*a);
                 root2 = root1;
                  cout<< "Solution: x = " << root1;
            }
             if(disc<0){
                 root1 = -b/(2*a);
                 root=(sqrt(-(disc))) / (2*a);
                 root2 = -b/(2*a);
                cout<< "Complex Solutions: x = " << root1<< " + "<<root<<"i and x = "<< root2<< " - "<<root << "i";
            }
            
    

    }