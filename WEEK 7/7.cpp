#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void percentage(int count);
main()
{
    int count;
    cout << "Enter numbers count: ";
    cin >> count;

    percentage(count);
}
void percentage(int count)
{
    int number = 0;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter a number: ";
        cin >> number;
        if (number < 200)
        {
            p1 = p1 + 1;
        }
        else if (number >= 200 && number <= 399)
        {
            p2 = p2 + 1;
        }
        else if (number >= 400 && number <= 599)
        {
            p3 = p3 + 1;
        }
        else if (number >= 600 && number <= 799)
        {
            p4 = p4 + 1;
        }
        else if (number >= 800)
        {
            p5 = p5 + 1;
        }
    }
    p1 = (p1 / count) * 100;
    p2 = (p2 / count) * 100;
    p3 = (p3 / count) * 100;
    p4 = (p4 / count) * 100;
    p5 = (p5 / count) * 100;

    cout << fixed << setprecision(2) << p1 << "%" << endl;
    cout << fixed << setprecision(2) << p2 << "%" << endl;
    cout << fixed << setprecision(2) << p3 << "%" << endl;
    cout << fixed << setprecision(2) << p4 << "%" << endl;
    cout << fixed << setprecision(2) << p5 << "%" << endl;
}