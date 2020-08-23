#include <iostream>
using namespace std;

int main()
{
    int maxWeight, value1, value2, weight1, weight2;
    cin >> maxWeight;
    cin >> value1 >> weight1;
    cin >> value2 >> weight2;
    
    if(weight1+weight2 <= maxWeight)
        cout << value1 + value2;
    else if(value1>=value2 && weight1 <= maxWeight)
            cout << value1;
    else if(value2>=value1 && weight2 <= maxWeight)
            cout << value2;
    else
        cout << 0;
    
    return 0;
}