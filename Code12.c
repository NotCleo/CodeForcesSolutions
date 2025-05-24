/*
You are given three points with integer coordinates x1, x2, and x3 on the X axis (1≤xi≤10). You can choose any point with an integer coordinate a on the X axis. Note that the point a may coincide with x1, x2, or x3. Let f(a) be the total distance from the given points to the point a. Find the smallest value of f(a)

.

The distance between points a
and b is equal to |a−b|. For example, the distance between points a=5 and b=2 is 3

.
Input

Each test consists of multiple test cases. The first line contains a single integer t
(1≤t≤103

) — the number of test cases. Then follows their descriptions.

The single line of each test case contains three integers x1
, x2, and x3 (1≤xi≤10

) — the coordinates of the points.
Output

For each test case, output the smallest value of f(a)
*/


#include <stdio.h>
#include <stdlib.h>

void sort(int* a, int* b, int* c) {
    if (*a > *b) { int t = *a; *a = *b; *b = t; }
    if (*b > *c) { int t = *b; *b = *c; *c = t; }
    if (*a > *b) { int t = *a; *a = *b; *b = t; }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        sort(&x, &y, &z);
        int a = y;  
        int output = abs(x - a) + abs(y - a) + abs(z - a);
        printf("%d\n", output);
    }
    return 0;
}

