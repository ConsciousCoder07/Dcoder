#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, num;
    cin >> n;
    
    for(int j=0; j<n; j++)
    {   
        cin >> num;
        int i=1;
        bool found = false;
        while((long long)pow(i,i)<=num)
        {   
            if((long long)pow(i,i)==num){
                found = true;
                cout << "Yes ";
                break;
            }
            i++;
        }
        
        if(!found)
            cout << "No ";
    }
    return 0;
}