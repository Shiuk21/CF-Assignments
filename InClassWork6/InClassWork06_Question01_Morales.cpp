#include <iostream>
using namespace std;

int main()
{
  double buf[6];
  double *w = buf;
  double x;
  int count = 0;
  
  cout << "Readings (negative to stop): ";
  do 
  {
    cin >> x;
    if (!cin)
    {
        cout << "Invalid input." << endl;
        return 0;
    }
    if (x >= 0)
    {
        *w = x;
        w++;
        if (w == buf + 6)
          w = buf;
        count++;
    }
  }
  while (x >= 0);

  int n;
  double *p;

  if (count < 6)
  {
    n = count;
    p = buf;
  }
  else 
  {
    n = 6;
    p = w;
  }
  cout << "stored " << count << ", kept " << n << endl;

  if (n == 0)
    return 0;

  double sum;
  double *maxp = p;
  int maxAge = n - 1;

  cout << "oldest to newest:";
  for (int k = 0; k < n; k++)
  {
    cout << " " << *p;
    sum += *p;
    if (*p > *maxp)
    {
      maxp = p;
      maxAge = n - 1 - k;
    }
    p++;
    if (p == buf + 6)
    {
      p = buf;
    }
  }
  cout << endl;

  cout << "mean " << sum / n << endl;
  cout << "max " << *maxp << " in slot " << (maxp - buf) << ", " << maxAge << " samples old" << endl;
  return 0;

}
