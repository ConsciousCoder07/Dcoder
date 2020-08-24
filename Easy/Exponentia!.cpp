#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if(n>=0)
    {   
        cout << "1";
        for(int i=1; i<=n; i++)
           cout << "," << pow(2,i);
    }
    else
    {   
        cout << "1.0";
        for(int i=1; i<=abs(n); i++)
                cout << "," << pow(2,-i);           
    }
    
    return 0;
}