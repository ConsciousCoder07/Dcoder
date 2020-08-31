#include <iostream>
using namespace std;

int main()
{
    int n, required;
    cin >> n >> required;
    int a[n];
    
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    int max = 0; // initially max amount = 0
    for(int i=0; i<=n-required; i++)
    {   
        // Sum resets to zero after each iteration
        int sum = 0;
        
        for(int j=i; j<=i+required-1; j++)
            sum+=a[j];
        
        if(sum > max)  max = sum;
    }
    cout << max;
    
    return 0;   
}