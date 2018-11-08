/*Prompt for diameter and read user input
volume1 = π × diameter × diameter × diameter / 6
diameter++
volume2 = π × diameter × diameter × diameter / 6
growth = volume2 - volume1
Print growth
diameter++
volume3 = π × diameter × diameter × diameter / 6
growth = volume3 - volume2
Print growth
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  const double p = 3.14159265;
  double diam = 0;
  cout << "diameter: ";
  cin >> diam;
  int volume1 = (p*(diam**3)/6);
  diam++
  int volume2 = (p*(diam**3)/6);

  int growth = volume2 - volume1;
  cout << "increase: " << Growth << endl;
  diam++
  int volume3 = (p*(diam**3)/6);
  growth = volume3 - volume2;
  cout << "increase: " << Growth << endl;
  return 0;
}
