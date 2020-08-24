#include <iostream>
using namespace std;

/*
Each participant plays (n-1)*2 game so total games played are
total = (n-1)*2*n;
Repeated games = n*(n-1);
Actual games = total - repeated = n*(n-1)
*/

int main()
{
    int n;
    cin >> n;
    cout << n*(n-1);
    return 0;
}