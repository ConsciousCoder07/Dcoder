#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        int root = round(sqrt(n));
        cout << root << endl;
    }
    
    return 0;
}