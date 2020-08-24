#include <bits/stdc++.h>
using namespace std;

int main()
{
    string binary;
    int decimal=0;
    
    cin >> binary;
    
    reverse(binary.begin(), binary.end());
    
    for(int i=0; i<binary.length(); i++)
        if(binary[i]=='1')
            decimal += pow(2,i);
    
    cout << decimal;
    
    return 0;
}