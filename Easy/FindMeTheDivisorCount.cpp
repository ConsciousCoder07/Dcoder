#include <iostream>
using namespace std;

int main()
{
    int divisor, upper, lower, count=0;
    cin >> lower >> upper >> divisor;
   
    for( int i = lower+1; i <= upper; i++)
        if(i % divisor == 0)
            count++;
    
    cout << count;
    return 0;
}