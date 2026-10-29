//Michael Morales, 10/29/2026, This code creates a function that finds the product of a double x raised to an int n power. It also reads how many calls are needed to do so and outputs them. 
#include <iostream>
#include <cmath>
using namespace std;

int calls = 0;

double power(double x, int n)
{
    calls++;
    double product;

    if (n == 0)
        return 1;
    if (n < 0)
        return 1/ power(x, -n);
    
    double half = power(x, n/2);

    if (n % 2 == 0)
        return half * half;
    else
        return x * half * half;
    
}

int main()
{
    double x;
    int n;
    double finalNum;

    cout << "x and n: ";
    cin >> x >> n;
    if (!cin)
        cout << "Invalid input" << endl;
    else 
    {
        finalNum = power(x, n);
        cout << x << "^" << n << " = " << finalNum << " (" << calls << " calls, a loop needs " << abs(n) << " multiplications)" << endl;
    }
}