#include <iostream>
using namespace std;

int main()
{
    int maths, algo, t;
    cin >> t;
    while(t--)
    {
        cin >> maths >> algo;
        printf( (maths>70 && algo>50) ? "Pass\n" : "Fail\n");
    }
    return 0;
}