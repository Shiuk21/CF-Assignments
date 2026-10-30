#include <iostream>
using namespace std;

long long naiveCalls = 0;
long long memoCalls = 0;

long long waysNaive(int n)
{
  naiveCalls++;
  if (n <= 2) 
  {
    return n;
  }
  return waysNaive(n - 1) + waysNaive(n - 2);
}

long long waysMemo(int n)
{
  static long long memo[91];
  memoCalls++;
  if (n <= 2)
  {
    return n;
  }
  if (memo[n] != 0) 
  {
    return memo[n];
  }
  memo[n] = waysMemo(n - 1) + waysMemo(n - 2);
  return memo[n];
}

long long waysLoop(int n)
{
  if (n <= 2) 
  {
    return n;
  }
  long long prev = 1, curr = 2;
  for (int i = 3; i <= n; i++)
  {
    long long next = prev + curr;
    prev = curr;
    curr = next;
  }
  return curr;
}

int main()
{
  int n;
  cout << "Rungs (1-90): ";
  if (!(cin >> n) || n < 1 || n > 90)
  {
    cout << "Invalid input" << endl;
    return 0;
  }

  cout << "loop:  " << waysLoop(n) << " ways" << endl;

  long long m = waysMemo(n);
  cout << "memo:  " << m << " ways, " << memoCalls << " calls" << endl;

  if (n <= 40)
  {
    long long v = waysNaive(n);
    cout << "naive: " << v << " ways, " << naiveCalls << " calls" << endl;
  }
  else
  {
    cout << "naive: skipped (too slow)" << endl;
  }
  return 0;
}