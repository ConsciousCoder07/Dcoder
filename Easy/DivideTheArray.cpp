#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    for(int i=1; i<n; i+=2)
        if(a[i]%2==0)
            printf((i+1>=n) ? "%d\n" : "%d ", a[i]);
    
    return 0;
}