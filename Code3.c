/*You are given three integers a, b, and c

. Determine if one of them is the sum of the other two.
Input

The first line contains a single integer t
(1≤t≤9261

) — the number of test cases.

The description of each test case consists of three integers a
, b, c (0≤a,b,c≤20

).
Output

For each test case, output "YES" if one of the numbers is the sum of the other two, and "NO" otherwise.
*/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int x[t], y[t], z[t];
    for(int i=0;i<t;i++)
        {
            scanf("%d %d %d\n", &x[i], &y[i], &z[i]);
        }
    for(int i=0;i<t;i++)
        {
            if(x[i]+y[i]==z[i])
                {
                    printf("YES\n");
                }
            else if(x[i]+z[i]==y[i])
                {
                    printf("YES\n");
                }
            else if(x[i]==y[i]+z[i])
                {
                    printf("YES\n");
                }
            else
                {
                    printf("NO\n");
                }
            
                
        }
}
