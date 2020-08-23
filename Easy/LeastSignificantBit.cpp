#include <iostream>
using namespace std;
/*
HINT: LSB is 1 if number is odd else 0
*/
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}