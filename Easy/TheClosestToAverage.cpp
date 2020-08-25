#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, num;
    double avg = 0.0;
    cin >> n;
    int temp = n;
    while(temp--)
    {
        cin >> num;
        avg += num;
    }
	avg /= n;
	if(2*avg <= 2*(int)avg+1)  //if avg has decimal <= 5
        cout << (int)avg;
    else 
        cout << (int)avg+1;    //if avg has decimal > 5
	return 0;
}
