#include <iostream>
using namespace std;

int main()
{
    int n, a1, a2;
    cin >> n;
    char a[n];
    cin >> a;
    cin >> a1 >> a2;
    
    if(isupper(a[a1]))
        a[a1] += 32; //converted to lower case 
    else
        a[a1] -= 32; // converted to upper case
    
    if(isupper(a[a2]))
        a[a2] += 32; //converted to lower case 
    else
        a[a2] -= 32; // converted to upper case
    
    cout << a;
    
    return 0;
}