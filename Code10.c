/*

On the board Ivy wrote down all integers from l to r

, inclusive.

In an operation, she does the following:

    pick two numbers x

and y on the board, erase them, and in their place write the numbers 3x and ⌊y3⌋. (Here ⌊∙⌋

    denotes rounding down to the nearest integer).

What is the minimum number of operations Ivy needs to make all numbers on the board equal 0

? We have a proof that this is always possible.
Input

The first line contains an integer t
(1≤t≤104

) — the number of test cases.

The only line of each test case contains two integers l
and r (1≤l<r≤2⋅105

).
Output

For each test case, output a single integer — the minimum number of operations needed to make all numbers on the board equal 0
.

*/


#include <stdio.h>
#define MAXN 200007
int main() {
    long v[MAXN];
    v[0] = 0;

    // Fill array with 1 + v[i / 3]
    for (long p = 1; p < MAXN; p++) {
        v[p] = 1 + v[p / 3];
    }

    // Prefix sum
    for (long p = 1; p < MAXN; p++) {
        v[p] += v[p - 1];
    }

    int t;
    scanf("%d", &t);

    while (t--) {
        long a, b;
        scanf("%ld %ld", &a, &b);
        long res = v[b] - 2 * v[a - 1] + v[a];
        printf("%ld\n", res);
    }
}
