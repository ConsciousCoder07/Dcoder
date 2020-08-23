#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    printf((a+b==6 || abs(a-b)==6) ? "Love" : "Hate");
    return 0;
}