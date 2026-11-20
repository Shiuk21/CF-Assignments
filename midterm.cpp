#include <iostream>
using namespace std;
//-----------------------------------------------------
/*
int reverseDigits(int n)
{
    int final = 0;
    int remainder = 0;

    while (n!=0)
    {
        remainder = n % 10;
        final = final * 10 + remainder;
        n = n/10;
    }
    return final;

}

int main()
{
    int n = 12345;
    cout << reverseDigits(n) << endl;
}
    */
//---------------------------------------------------------
/*
bool isPalindrome(int n)
{
    int initial = n;
    int final = 0;
    int remainder = 0;

    while (n!=0)
    {
        remainder = n % 10;
        final = final * 10 + remainder;
        n = n/10;
    }
    
    if (final < 0)
    {
        cout << "false" << endl;
        return false;
    }
    else if (final == initial)
    {
        cout << "true" << endl;
        return true;
    }
    else 
    {
        cout << "false" << endl;
        return false;
    }
}

int main()
{
    int a = 121;
    int b = -121;
    int c = 10;

    cout << isPalindrome(a) << endl << isPalindrome(b) << endl << isPalindrome(c) << endl;
}
    */
//----------------------------------------------------------------------------------------------
/*
bool twoSum(const int a[], int n, int target, int &i, int &j)
{
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ( (a[i] + a[j]) == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int i;
    int j;
    int a[] = {2, 7, 11, 15};
    int b[] = {3, 2, 4};

    if (twoSum(a, 4, 9, i, j))
        cout << i << " " << j << endl;

    if (twoSum(b, 3, 6, i, j))
        cout << i << " " << j << endl;
    return 0;
}
    */
///---------------------------------------------------------
void moveZeroes(int a[], int n)
{
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[k] = a[i];
            k++;
        }
    }
    for (int i = k; i < n; i++)
        a[i] = 0;
}

int main()
{
    int a[] = {0, 1, 0, 3, 12};
    moveZeroes(a, 5);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
