//Michael Morales/Kenji, 10/15/26
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    int readings[SIZE];
    
    for (int i = 0; i < 6; i++)
    {
        //The prompt uses i+1 because i starts at 0, but the first sensor is 1. The array, however, needs to start at 0.
        cout << "Enter reading from sensor " << i+1 << " (C): ";
        cin >> readings[i];
    }
    cout << "Sensor readings:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Readings[" << i << "] = " << readings[i] << " C" << endl;
    }
    cout << "Newest to oldest: ";
    for (int i = 5; i >= 0; i--)
    {
        cout << readings[i] << " ";
    }
    cout << endl;

}