/*
You are given two integers x and y

.

Output two integers: the minimum of x
and y, followed by the maximum of x and y

.
Input

The first line contains a single integer t
(1≤t≤100

) — the number of test cases.

The only line of each test case contains two space-separated integers x
and y (0≤x,y≤9

).
Output

For each test case, output two integers: the minimum of x
and y, followed by the maximum of x and y.
*/

    #include <stdio.h>
    int main() 
    {
        int t;
        scanf("%d", &t);
        int x[t], y[t]; 
        for (int i = 0; i < t; i++) 
        {
            scanf("%d %d", &x[i], &y[i]);
        }
        for (int i = 0; i < t; i++) 
        {
            if (x[i] < y[i])
                printf("%d %d\n", x[i], y[i]);
            else
                printf("%d %d\n", y[i], x[i]);
        }
    }
