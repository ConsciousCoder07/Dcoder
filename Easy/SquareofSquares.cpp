#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sqroot = sqrt(n); //truncate the decimals 
    if(n<0)
        cout << "NO";
    else if(pow(sqroot, 2) == n)
        cout << "YES";
    else
        cout << "NO";
    
}