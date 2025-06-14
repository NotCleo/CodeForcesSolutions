/*
There are n Fibonacci cubes, where the side of the i-th cube is equal to fi, where fi is the i

-th Fibonacci number.

In this problem, the Fibonacci numbers are defined as follows:

    f1=1

f2=2
fi=fi−1+fi−2
for i>2

There are also m
empty boxes, where the i-th box has a width of wi, a length of li, and a height of hi

.

For each of the m

boxes, you need to determine whether all the cubes can fit inside that box. The cubes must be placed in the box following these rules:

    The cubes can only be stacked in the box such that the sides of the cubes are parallel to the sides of the box;
    Every cube must be placed either on the bottom of the box or on top of other cubes in such a way that all space below the cube is occupied;
    A larger cube cannot be placed on top of a smaller cube. 

Input

Each test consists of several test cases. The first line contains a single integer t
(1≤t≤103

) — the number of test cases. The description of the test cases follows.

In the first line of each test case, there are two integers n
and m (2≤n≤10,1≤m≤2⋅105

) — the number of cubes and the number of empty boxes.

The next m
lines of each test case contain 3 integers wi, li, and hi (1≤wi,li,hi≤150) — the dimensions of the i

-th box.

Additional constraints on the input:

    The sum of m

across all test cases does not exceed 2⋅105

    . 

Output

For each test case, output a string of length m
, where the i-th character is equal to "1" if all n cubes can fit into the i-th box; otherwise, the i-th character is equal to "0".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        int f = 1, g = 1;
        for(int p = 2; p <= n + 1; p++) {
            int x = f;
            f = g;
            g += x;
        }

        char *s = (char *)malloc((m + 1) * sizeof(char));
        for(int i = 0; i < m; i++) {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);

            int d = a;
            if(b > d) d = b;
            if(c > d) d = c;

            s[i] = '0';
            if(a >= f && b >= f && c >= f && d >= g) {
                s[i] += 1;  // Changes '0' to '1'
            }
        }

        s[m] = '\0'; 
        printf("%s\n", s);
        free(s);
    }
}
