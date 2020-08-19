#include <iostream>
using namespace std;

int main()
{
    int n, x;
    
    cin>>n>>x;

    if(x < n/2) 
    //For first half
        cout<<x + n/2;
    else
    //For second half
        cout<<x - n/2;
    
    return 0;
}