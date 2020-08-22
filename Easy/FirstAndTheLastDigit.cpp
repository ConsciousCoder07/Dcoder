#include <iostream>
using namespace std;

int main()
{
    int t, n, first, last;
    cin >> t;
    while(t--)
    {
        cin >> n;
        last = n%10;
        first = n;
        while(first>=10)
            first /= 10;
        cout << first+last << endl;  
    }
    return 0;
}
