#include <iostream>
using namespace std;

int main()
{
    int dist, alex, ryan;
    
    cin >> dist >> alex >> ryan;
    
    if(alex > ryan)
        cout << "Alex";
    else if(alex < ryan)
        cout << "Ryan";
    else 
        cout << "Draw";
    
    return 0;
}