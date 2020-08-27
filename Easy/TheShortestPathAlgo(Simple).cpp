#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    // Using distance formula with one point as origin.
    int distTruckA = sqrt(x1*x1 + y1*y1 );
    int distTruckB = sqrt(x2*x2 + y2*y2 );
    if(distTruckA < distTruckB)
        cout << 'A';
    else 
        cout << 'B';
    return 0;
}