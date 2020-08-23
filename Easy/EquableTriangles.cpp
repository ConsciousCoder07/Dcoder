#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, s, area;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        if(area==a+b+c)
            cout << "True" << endl;
        else 
            cout << "False" << endl;
    }
    return 0;
}