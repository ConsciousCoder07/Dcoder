#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a[100], n, sum = 0, i;
    cin >> n ;
    for(i=0; i < n; i++){
         cin >> a[i];
         sum += a[i];
    }
    /*
    function: *max_element(first index, last index) : returns maximum element of the array.
    */
    cout << sum % *max_element(a, a+n);
    return 0;
        
    
}