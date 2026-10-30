#include <iostream>
using namespace std;

long long moves = 0;

void transfer(int n, char from, char to, char spare, bool show)
{
  if (n == 0) return;

  transfer(n - 1, from, spare, to, show);

  moves++;
  if (show)
  {
    cout << moves << ". wafer " << n << ": " << from << " -> " << to << endl;
  }

  transfer(n - 1, spare, to, from, show);
}

int main()
{
  int n;
  cout << "Wafers: ";
  if (!(cin >> n) || n < 1 || n > 30)
  {
    cout << "Invalid input" << endl;
    return 0;
  }

  transfer(n, 'A', 'C', 'B', n <= 4);

  cout << moves << " moves (2^" << n << " - 1 = " << moves << ")" << endl;
  return 0;
}