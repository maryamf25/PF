#include <iostream>
using namespace std;

string plant(string seed, int water, int fert, int temp);

main()
{
     string seed;
     int water, fert, temp;
     cout << "Enter type of flower: ";
     cin >> seed;
     cout << "Enter units of water: ";
     cin >> water;
     cout << "Enter units of fertilizer: ";
     cin >> fert;

     cout << "Enter temperature: ";
     cin >> temp;
     string output = plant(seed, water, fert, temp);
     cout << output;
}
string plant(string seed, int water, int fert, int temp)
{
     int stemLength;
     int segments;
     int clusters;
     string flowers = "";
     if (temp >= 20 && temp <= 30)
     {
          for (segments = 1; segments <= water; segments++)
          {

               for (stemLength = 1; stemLength <= water; stemLength++)
               {
                    flowers = flowers + "-";
               }
               for (clusters = 1; clusters <= fert; clusters++)
               {
                    flowers = flowers + seed;
               }
          }
     }
     else
     {
          for (segments = 1; segments <= water; segments++)
          {

               for (stemLength = 1; stemLength <= water; stemLength++)
               {
                    flowers = flowers + "-";
               }
          }
          flowers = flowers + seed;
     }

     return flowers;
}