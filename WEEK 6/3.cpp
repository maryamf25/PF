#include <iostream>

using namespace std;

float perimeter(char l, float num);

main()
{
   float num, ans;
   char l;
   cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
   cin >> l;
   cout << "Enter the value: ";
   cin >> num;

   ans = perimeter(l, num);
   cout << "The perimeter is: " << ans;
}
float perimeter(char l, float num)
{
   float result;

   if (l == 's')
   {
      result = num * 4;
   }
   if (l == 'c')
   {
      result = num * 6.28;
   }
   if (l == 't')
   {
      result = num * 3;
   }

   if (l == 'h')
   {
      result = num * 6;
   }
   return result;
}