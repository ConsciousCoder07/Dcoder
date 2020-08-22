#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t, n, input[100];
    cin >> t;
    while(t--)
    {
        cin >> n;
        
        for(int i=0; i<n; i++)
            cin >> input[i];
        
        //to sort in descending order pass third argument as greater<int> ()
        sort(input, input+n, greater<int> ());
        
        for(int i=0; i<n; i++)
            cout << input[i];
    }
    return 0;
}