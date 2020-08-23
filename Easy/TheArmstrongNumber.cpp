#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, digit, sum= 0;
    
    cin >> n;
    int temp = n;
    
    while(temp!=0)
    {
        digit = temp%10;
        temp /= 10;
        sum += pow(digit, 3);
    }
    
    printf( ( sum == n) ? "YES" : "NO" ) ;
    
    return 0;
}