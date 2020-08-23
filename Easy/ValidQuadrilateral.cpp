#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {    
        int sum =0;
        for(int i=1; i<=4; i++)
        {
            cin >> n;
            sum += n;
        }
        
        if(sum==360)
            cout << "YES" << "\n";
        else 
            cout << "NO" << "\n";
    }
    
    return 0;
}