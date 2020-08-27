#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a+b<=21)
        cout << a+b;
    else if( a == 11 && a+b>21)
        cout << b+1;
    else if( b == 11 && a+b>21)
        cout << a+1;
    else
        cout << 0;
    return 0;   
}