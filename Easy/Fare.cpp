#include <iostream>
using namespace std;

int main()
{
    int A, M, N, D;
    
    cin >> A >> M >> N >> D;
    
    if(D > A)
        cout << A*M + (D-A)*N;
    else 
        cout << D*M;
    
    return 0;
}