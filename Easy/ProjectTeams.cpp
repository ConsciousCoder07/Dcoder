#include <iostream>
using namespace std;

/* 
Explanation: Teacher wants each group to have 3 or more students. 
We have to output the maximum number of group that can be created.
Maximum groups will obtain by 3 as it is the least allowed number.
*/

int main()
{
    int n;
    cin >> n;
    cout << n/3;
    return 0;
}