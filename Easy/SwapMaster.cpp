#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n, a[1000], temp, i;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=i-1; i>=0; i--)
        cout<<a[i]<<" ";
    return 0;
}   