#include <iostream>
using namespace std;
string join(string argument);

main()
{
    string argument;
    cout << "Enter the argument 'a': ";
    getline(cin, argument);
    string statement = join(argument);
    cout << "Result: " << statement;


}
string join(string argument){
    string a = "something " + argument;
    return a;
}