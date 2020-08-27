#include <iostream>
using namespace std;

int main()
{   
    int n=5;
    for(int row=1; row<=n; row++)
    {
        // Print spaces
        for(int space = 1; space<=n-row; space++)
            cout << " ";
        
        // Print asterisks
        for(int col=1; col<=2*row-1; col++)
            cout << "*";
        
        cout << endl;       
    }
    return 0;
}