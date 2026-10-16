#include <iostream>
using namespace std;

int main()
{
    int chan[8];
    int ID = 318;
    bool found = false;
    int finalchan;

    cout << "Enter the IDs of the 8 connected sensors: ";
    for (int i = 0; i < 8; i++)
    {
        cin >> chan[i];
    }
    for (int i = 0; i < 8; i++)
    {
        if (chan[i] == ID)
        {
            found = true;
            finalchan = i;
            break;
        } 
    }
    cout << "Sensor ID to check: " << ID << endl;
    if (found)
    {
        cout << "Yes" << endl;
        cout << "Sensor " << ID << " is on channel " << finalchan << endl;
    }
    else 
    {
        cout << "No" << endl;
    }
}