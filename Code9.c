/*
Monocarp decided to embark on a long hiking journey.

He decided that on the first day he would walk a
kilometers, on the second day he would walk b kilometers, on the third day he would walk c kilometers, on the fourth day, just like on the first, he would walk a kilometers, on the fifth day, just like on the second, he would walk b kilometers, on the sixth day, just like on the third, he would walk c

kilometers, and so on.

Monocarp will complete his journey on the day when he has walked at least n

kilometers in total. Your task is to determine the day on which Monocarp will complete his journey.
Input

The first line contains one integer t
(1≤t≤104

) — the number of test cases.

Each test case consists of one line containing four integers n
, a, b, c (1≤n≤109; 1≤a,b,c≤106

).
Output

For each test case, output one integer — the day on which Monocarp will have walked at least n
kilometers in total and will complete his journey.


*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, a, b, c;
        scanf("%d %d %d %d", &n, &a, &b, &c);
        
        int distances[3] = {a, b, c};
        int total_cycle = a + b + c;
        
        //3-day cycles
        int days = (n / total_cycle) * 3;
        int sum = (n / total_cycle) * total_cycle;

        for (int i = 0; i < 3; i++) {
            if (sum >= n) break;
            sum += distances[i];
            days++;
        }
        
        printf("%d\n", days);
    }
    return 0;
}
