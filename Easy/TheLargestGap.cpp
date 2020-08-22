#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num[1000], min, max;
    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    max = *max_element(num, num+n);
    min = *min_element(num, num+n);
    
    cout << max-min;
    return 0;
}