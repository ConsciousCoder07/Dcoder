#include <iostream>
using namespace std;

/*
   Hints:
   1. ASCII values of uppercase alphabets are between 65-90 (A-Z)
   2. ASCII values of lowercase alphabets are between 97-122 (a-z)
*/

int main()
{
    int n;

    cin >> n;

    for ( n = 96+n; n >= 97; n--)
        cout << char(n);
    
    return 0;
}