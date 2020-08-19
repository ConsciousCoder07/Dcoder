#include <iostream>
#include <string>
using namespace std;


int main()
{   
    int n;
    char a[20];
    
    cin >> n >> a;
    
    for( int i = 0; i < n; i++)
        //Prints each letter 3 times
        for(int j = 0; j < 3; j++)
            cout << a[i];
    
    return 0;
}