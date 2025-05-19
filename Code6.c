/*
You are given two numbers x,y. You need to determine if there exists an integer n such that S(n)=x, S(n+1)=y

.

Here, S(a)
denotes the sum of the digits of the number a

in the decimal numeral system.
Input

Each test contains multiple test cases. The first line contains the number of test cases t
(1≤t≤500

). The description of the test cases follows.

The first line of each test case contains two integers x,y
(1≤x≤1000,1≤y≤1000

).
Output

For each test case, print "NO" if a suitable n

does not exist. Otherwise, output "YES".

You can output each letter in any case (for example, "YES", "Yes", "yes", "yEs", "yEs" will be recognized as a positive answer).

*/


#include <stdio.h>
int main() 
{
    int t;
    scanf("%d", &t); 
    
    while (t--) 
    {
        int x, y;
        scanf("%d %d", &x, &y); // Read x and y
        
        // Case 2: n = 10^m - 1, S(n) = 9m = x, S(n+1) = 1 = y
        if (y == 1 && x % 9 == 0) 
        {
            printf("YES\n");
            continue;
        }
        
        // Case 1: S(n+1) = S(n) + 1 - 9k
        // y = x + 1 - 9k => 9k = x - y + 1
        long long diff = x - y + 1;
      
        if (diff >= 0 && diff % 9 == 0) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }
}
