#include <iostream>
using namespace std;

//Hint: Archie's homework basically is to divide the numerator and denominator by their GCD or HCF

int main()
{
    int num, den, numerator, denominator;
    cin >> numerator >> denominator;
    num = numerator;
    den = denominator;
    
    while(num!=den)
    {
        if(num>den)
            num -= den;
        else
            den -= num;
    }
    
    cout << numerator/num << " " << denominator/den;
    
    return 0;
    
    /*Alternative
    
    int min = numerator < denominator ? numerator : denominator;
    for(int i=1; i<=min; i++)
        if(numerator%i == 0 && denominator%i == 0)
            cout << numerator/i << " " << denominator/i;
    */
    
}