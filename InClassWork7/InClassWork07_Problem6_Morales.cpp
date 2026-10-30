#include <iostream>
using namespace std;

int reverseDigits(int n)
{
    int reversed = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    return reversed;
}

bool isPalindrome(int n)
{
    return n == reverseDigits(n);
}

int main()
{
    int low, high;
    int count = 0;

    cout << "Serial range: ";
    cin >> low >> high;

    if (!cin || low < 0 || high < 0 || low > high)
    {
        cout << "Invalid Input" << endl;
        return 0;
    }

    for (int i = low; i <= high; i++)
    {
        if (isPalindrome(i))
        {
            if (count > 0)
                cout << " ";
            cout << i;
            count++;
        }
    }

    cout << endl;
    cout << count << " palindromic serials" << endl;
}

/* Recursive funtion
int reverseDigits(int n, int reversed = 0)
{
    if (n == 0)
        return reversed;

    return reverseDigits(n / 10, reversed * 10 + n % 10);
}
*/