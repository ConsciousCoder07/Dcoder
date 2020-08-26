#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int garryPoints[3], sharryPoint[3];
    int garrySum = 0, sharrySum = 0, n;
    
    for(int i=0; i<3; i++)
    {
        cin >> n; 
        garrySum += n;
    }
     for(int i=0; i<3; i++)
    {
        cin >> n; 
        sharrySum += n;
    }
    
    if(garrySum > sharrySum)
        cout << "Garry " << garrySum - sharrySum;
    else if(sharrySum > garrySum)
        cout << "Sharry " << sharrySum - garrySum;
    else 
        cout << "None 0";
    
    return 0;
}