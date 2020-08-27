#include <iostream>
using namespace std;

bool primeLoop(int n)
{
        if(n<2) return false;
        else if(n==2 || n==3)
            return true;
        else if(n%2==0 || n%3==0)
            return false;
        else
        {
            for(int j=5; j*j<=n; j+=6)
                if(n%j == 0 || n%(j+2) == 0 )
                    return false;
        }
        return true;      
}

bool primeRecursion(int n, int i=2)
{
    if(n < 2)
        return false;
    else if(n==2 || n==3)
        return true;
    else if(n%i == 0)
        return false;
    else if ( i*i > n)
        return true;
    else
        return ( primeRecursion(n, i+1));
}

int main()
{
    int lower, upper;
    cin >> lower >> upper;
    for(int num=lower; num<=upper; num++)
        if(primeRecursion(num))
            cout << num << endl;
}