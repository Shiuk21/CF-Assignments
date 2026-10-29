#include <iostream>
using namespace std;

/*
void swapA(int a, int b)
{
    int t = a; 
    a = b;
    b = t;
}
void swapB(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
void swapC(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int addTax(int price)
{
    price = price + price / 10;
    return price;
}

int main()
{
    int x = 3, y = 8;
    swapA(x, y);
    cout << x << " "<< y << endl;
    swapB(x, y);
    cout << x << " " << y << endl;
    swapC(&x, &y);
    cout << x << " " << y << endl;
    int p = 50;
    int q = addTax(p);
    cout << p << " " << q << endl;
    return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int hits = 100;

int next()
{
    static int hits = 0;
    hits += 2;
    return hits;
}

int main()
{
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        int hits = i*10;
        total += hits + next();
    }
    cout << total << " " << hits << " " << ::hits << endl;
    {
        int hits = 5;
        ::hits += hits;
    }
    cout << hits << " " << next() << endl;
    return 0;
}

