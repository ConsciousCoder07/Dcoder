#include <iostream>
using namespace std;

int main()
{
    int t, students, books;
    cin >> t;
    while(t--)
    {
        cin >> students >> books;
        printf( ( books % students == 0 ) ? "Yes\n" : "No\n");    
    }
    return 0;
}