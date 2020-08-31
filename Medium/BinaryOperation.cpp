#include <bits/stdc++.h>
using namespace std;

int toDecimal(string num)
{   
    reverse(num.begin(), num.end());
    
    int decimal = 0;
    for(int i=0; i<num.size(); i++)  
        if(num[i]=='1')
            decimal += pow(2,i);
    
    return decimal;
}

void toBinary(int n)
{
    int a[100], i=0;
    while(n>0)
    {
        a[i] = n%2;
        n = n/2;
        i++;
    }
    
    for(int j=i-1; j>=0; j--)
        cout << a[j];
    
    cout << endl;
}

int main()
{
    string a, b;
    cin >> a >> b ;
    int aDecimal = toDecimal(a);
    int bDecimal = toDecimal(b);
    toBinary(aDecimal + bDecimal);
    toBinary(aDecimal * bDecimal);
    return 0;
}