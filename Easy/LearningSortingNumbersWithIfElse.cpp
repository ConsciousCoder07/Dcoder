#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, p;
    cin >> m >> n >> p;
    
    if( (m<n) && (m<p))
    {
        if(n<p)
            cout << m << " " << n << " " << p;
        else
            cout << m << " " << p << " " << n;
    }
    else if( (n<m) && (n<p))
    {
        if(m<p)
            cout << n << " " << m << " " << p;
        else
            cout << n << " " << p << " " << m;
    }
    else if (m<n)
        cout << p << " " << m << " " << n;
    else
        cout << p << " " << n << " " << m;
        
    return 0;
}