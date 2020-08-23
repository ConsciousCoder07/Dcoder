#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    
    if(num<=1)
        return false;
    if(num==2 || num == 3)
        return true;
    
/*  Integers can be represented by 6k+i, k is an integer and i = 0 to 5
    6k+0, 6k+2, 6k+4 are divisible by 2.
    6k+3 is divisible by 3.
    So they can be eliminated right away and we only need to check for 6k+1 and 6k+5
    which can be written as 6k+1 and 6k-1.
    So we run a loop from 5 to sqrt(n) and check if they are divisible by 6k+1 or 6k-1.
*/
    if(num%2 == 0 || num%3 == 0)
        return false;
    
    for(int i=5; i*i<=num; i+=6)
        if(num%i == 0 || num%(i+2) == 0)
            return false;
    
    return true;
}

int main()
{
    int n, num, primeCount = 0;
    
    cin >> n;
    
    while(n--)
    {
        cin >> num;
        if ( isPrime(num) == true )
            primeCount++;
    }
    
    cout << primeCount;
    
    return 0;
}