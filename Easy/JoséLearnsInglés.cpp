#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int n, i, j;
    char a[26];
    cin >> n;

    for ( i = 0; i < n; i++ )
        cin >> a[i];
  
  
    for( i = 0; i < n-1; i++)
    // repeat comparision for (n-1) times 
        for(j = 0; j < n-1-i; j++)
        // n-1 comparison for each element. 
        // -i to exclude the sorted element.
        {
            char t1 = tolower(a[j]);
            char t2 = tolower(a[j+1]);
            if(t1 > t2){
                char temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    for( i = 0; i < n; i++ )
        cout << a[i] << " ";
    
    return 0;
}