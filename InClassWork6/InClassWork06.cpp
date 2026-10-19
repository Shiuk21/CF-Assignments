#include <iostream>
using namespace std;

int main()
{
    int flow = 40, head = 12, spare = 5;
    int& f = flow;
    int* p = &head;
    int* q = p;
    int** pp = &p;
    f = f + *p;
    p = &flow;
    *p -= 2;
    **pp += *q;
    *pp = &spare;
    *q = *p * 3;


    //cout << "p:" << p << " &flow:" << &flow << endl;
    cout << flow << head << spare << endl;


    //cout << "f: " << f << " *p: " << *p << " *q: " << *q << " **pp:" << **pp << " q:" << q << endl;
}