# Problem Description
```
Problem Statement
Dcoder has N members each numbered from 1 to N. A member admires other member if its number divides the other member's number. Given a number N you need to find the number of people with odd number of admirers

Input
T the number of test cases. For each test case an integer N

Output
A single integer representing the number of members with odd admirers.

Constraints
1 < T < 100 1 < N < 10^9

Sample Input
1
5

Sample Output
3
```

# Explanation
```
Numbers:   1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  
Admirers:  0  1  1  2  1  3  1  3  2   3  1    5   1   3   3   4 
          ✅       ✅            ✅                          ✅
          
   Even admirers = sqrt(n)
   Odd admirers = n - even admirers 
```

# Code

## C++
```c++
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int even = sqrt(n);
        cout << n-even<< endl;
    }
}
```

## Python
```py
import math

for _ in range(int(input())):
    num = int(input())
    print(num - math.floor(num**0.5))
```

## Java
```java
import java.util.*;

class Dcoder
{  
  public static void main(String args[])
  {  
      Scanner sc = new Scanner(System.in);
      
      int t, n, even;
      t = sc.nextInt();
      
      for(int i=0; i<t; i++){
          n = sc.nextInt();
          even = (int)Math.floor(Math.sqrt(n));
          System.out.println(n-even);
      }
  }
}
```