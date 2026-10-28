#include <iostream>
using namespace std;

int main()
{
  double tempC[5];
  const char *name[5] = {"M1", "M2", "M3", "M4", "M5"};
  double *rank[5];

  for (int i = 0; i < 5; i++)
  {
    cout << "Temperature of " << name[i] << " (C): ";
    if (!(cin >> tempC[i]))
    {
      cout << "Invalid input" << endl;
      return 0;
    }
    rank[i] = &tempC[i];
  }

  for (int i = 0; i < 4; i++)
  {
    int best = i;
    for (int j = i + 1; j < 5; j++)
    {
      if (*rank[j] > *rank[best] || (*rank[j] == *rank[best] && rank[j] < rank[best]))
      {
        best = j;
      }
    }
    double *t = rank[i];
    rank[i] = rank[best];
    rank[best] = t;
  }

  for (int k = 0; k < 5; k++)
  {
    cout << k + 1 << ". " << name[rank[k] - tempC] << " " << *rank[k] << " C" << endl;
  }

  cout << "data order:";
  for (int i = 0; i < 5; i++)
    cout << " " << tempC[i];
  cout << endl;

  double &hottest = *rank[0];
  hottest -= 10;

  cout << name[rank[0] - tempC] << " after cooling: " << hottest << " C" << endl;

  cout << "data order:";
  for (int i = 0; i < 5; i++)
    cout << " " << tempC[i];
  cout << endl;
  return 0;
}