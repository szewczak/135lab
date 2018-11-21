#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int n = 0;
   int rem = 0;

   cout << "Enter an integer: " << endl;
   cin >> n;
   n = abs(n);
   while (n =! 0)
   {
      rem = n % 10;
      cout << rem;
      n = n / 10;
   }
   cout << endl;
return 0;
}
