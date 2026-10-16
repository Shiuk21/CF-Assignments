//Michael Morales/Kenji, 10/15/26
#include <iostream> 
using namespace std;

int main()
{
    int pressure[6];
    int c1;
    int c2;
    int temp;

    cout << "Enter 6 pressure readings (kPa): ";
    for (int i = 0; i < 6; i++)
    {
        cin >> pressure[i];
    }
    cout << "Before swap: ";
    for (int i = 0; i < 6; i++)
    {
        cout << pressure[i] << " ";
    }
    cout << endl;

    cout << "First channel to swap (0-5): ";
    cin >> c1;
    if (c1 < 0 || c1 > 5)
    {
        cout << "Invalid channel" << endl;
    }
    else
    {
        cout << "Second channel to swap (0-5): ";
        cin >> c2;
        if (c2 < 0 || c2 > 5)
        {
            cout << "Invalid channel" << endl;
        }
        else
        {
            temp = pressure[c1];
            pressure[c1] = pressure[c2];
            pressure [c2] = temp;

            cout << "After swap: ";
            for (int i = 0; i < 6; i++)
            {
                cout << pressure[i];
                cout << " ";
            }
            cout << endl;
        }
    }
}