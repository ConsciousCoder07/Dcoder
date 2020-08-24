#include <iostream>
using namespace std;

int main()
{
    float r, a;
    cin >> r;
    if(r<=0)
        cout << 0;
    else
        printf("%.2f", 3.14*r*r);
    return 0;
}