#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int squares = 0;
    
    for(int i=a; i<=b; i++)
        squares += pow(i,2);
    
    cout << squares;
    
    return 0;
}