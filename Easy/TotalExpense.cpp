#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    float n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n > 1000)
            cout << fixed << setprecision(2) << n-n*0.1 << endl;  
        else 
           printf("%.2f\n", n );
    }
    return 0;
}