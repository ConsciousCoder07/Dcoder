#include <iostream>
using namespace std;

/*
Formulae: 
1. Celcius to Farenheit = 9/5 * celcius + 32
2. Farenheit to Celcius = Farenheit - 32 * 5/9 
*/
        
int main()
{
    int celcius;
    
    cin >> celcius;
    
    int farenheit = (9 * celcius)/5 + 32;
    
    cout<< farenheit;
    
    return 0;
}