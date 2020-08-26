#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin >> num;
        v.push_back(num);
    }
    
    cout << accumulate(v.begin(), v.end(), 0);
    
    return 0; 
}