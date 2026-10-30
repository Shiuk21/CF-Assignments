#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    cout << "gcd(" << a << ", " << b << ")";

    if (b == 0)
        return a;

    cout << " -> ";
    return gcd(b, a % b);
}

int lcm(int a, int b, int g)
{
    return a * g / b;
}

int main()
{
    int a, b;
    int g, l;

    cout << "Teeth on gear 1 and gear 2: ";
    cin >> a >> b;

    if (!cin || a <= 0 || b <= 0)
        cout << "Invalid input" << endl;
    else
    {
        g = gcd(a, b);
        cout << endl;

        l = lcm(a, b, g);
        cout << "gcd " << g << ", lcm " << l << endl;

        cout << "same teeth meet again after " << b / g << " turns of gear 1 and "
             << a / g << " turns of gear 2" << endl;

        if (g == 1)
            cout << "hunting-tooth pair: wear is spread evenly" << endl;
        else
            cout << "not a hunting-tooth pair" << endl;
    }
}