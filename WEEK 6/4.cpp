#include <iostream>

using namespace std;

float largest(float num1, float num2, float num3);

main()
{
   float num1, num2, num3, ans;

   cout << "Enter the first number: ";
   cin >> num1;
   cout << "Enter the second number: ";
   cin >> num2;
   cout << "Enter the third number: ";
   cin >> num3;

   ans = largest(num1, num2, num3);
   cout << "The greatest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << ans;
}
float largest(float num1, float num2, float num3)
{
   float result;

   if (num1 > num2)
   {
      if (num1 > num3)
      {
         result = num1;
      }
      else
      {
         result = num3;
      }
   }

   if (num2 > num3)
   {

      result = num2;
   }
   else
   {
      result = num3;
   }
   return result;
}
