#include <iostream>
using namespace std;

int main()
{
    int LL[100];
	int temp,i=0;

	while (cin >> temp, LL[i++]=temp, temp!=-1){}
	
	for (i=i-2; i>=0; i--) 
        cout << LL[i] << " ";
    
    return 0;
    	
}