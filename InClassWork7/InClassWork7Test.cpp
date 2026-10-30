#include <iostream>
using namespace std;

void swapA(int a, int b)
{
    int t = a; a = b; b = t; 
}
void swapB(int &a, int &b)
{
    int t = a; a = b; b = t;
}
void swapC(int *a, int *b)
{
    int t = *a; *a = *b; *b = t;
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
    cout << x << " " << y << endl;
    swapB(x, y);
    cout << x << " " << y << endl;
    swapC(&x, &y);
    cout << x << " " << y << endl;
    int p = 50;
    int q = addTax(p);
    cout << p << " " << q << endl;
    return 0;
}