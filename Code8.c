/*
Artem wrote the digit d on the board exactly n! times in a row. So, he got the number dddddd…ddd (exactly n!

digits).

Now he is curious about which odd digits from 1
to 9

divide the number written on the board.
Input

The first line contains a single integer t
(1≤t≤100) — the number of test cases. The next t

test cases follow.

Each test case consists of a single line containing two integers n
and d (2≤n≤109, 1≤d≤9

).
Output

For each test case, output the odd digits in ascending order that divide the number written on the board.

*/

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        int d;
        scanf("%lld %d", &n, &d);
        int ans[5];
        int ans_size = 0;
        
        ans[ans_size++] = 1;
        if (n >= 3 || d % 3 == 0) ans[ans_size++] = 3;
        if (d == 5) ans[ans_size++] = 5;
        if (d % 7 == 0 || n >= 3) ans[ans_size++] = 7;
        if (d % 9 == 0 || n >= 6 || (n >= 3 && d % 3 == 0)) ans[ans_size++] = 9;
        
        for (int i = 0; i < ans_size; i++) {
            printf("%d ", ans[i]);
        }
        printf("\n");
    }
    return 0;
}
