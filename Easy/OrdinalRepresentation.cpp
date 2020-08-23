#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if(n==1)
        cout << n << "st";
    else if(n==2)
        cout << n << "nd";
    else if(n==3)
        cout << n << "rd";
    else 
        cout << n << "th";
    
    return 0;
}