#include <iostream>
using namespace std;

int factRecursion(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return(n*factRecursion(n-1));
}
int factIteration(int n)
{
    int f = 1;
    for(int i=1; i<=n; i++)
        f *= i;
    return f;
}
int main()
{
    int n;
    cin >> n;
    cout << factRecursion(n);
    return 0;
}