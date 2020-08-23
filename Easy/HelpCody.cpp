#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    int a[n];
    
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    //sort in descending order with time complexity of O(nlogn)
    sort(a, a+n, greater<int>());

    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    
    
    return 0;
}