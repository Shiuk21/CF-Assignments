#include <iostream>
using namespace std;

int main()
{
  double buf[6];
  double *w = buf;
  double x;
  
  cout << "Readings (negative to stop): ";
  do 
  {
    cin >> x;
    if (!cin)
    {
        cout << "Invalid input." << endl;
    }
    if (x >= 0)
    {
        *w = x;
        w++;
    }
  }
  while (x >= 0);
}