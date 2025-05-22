/*
You are given a positive integer k and a set S of all integers from l to r

(inclusive).

You can perform the following two-step operation any number of times (possibly zero):

    First, choose a number x

from the set S, such that there are at least k multiples of x in S (including x
itself);
Then, remove x
from S

    (note that nothing else is removed).

Find the maximum possible number of operations that can be performed.
Input

Each test contains multiple test cases. The first line of the input contains a single integer t
(1≤t≤104

) — the number of test cases. The description of test cases follows.

The only line of each test case contains three integers l
, r, and k (1≤l≤r≤109, 1≤k≤r−l+1) — the minimum integer in S, the maximum integer in S, and the parameter k

.
Output

For each test case, output a single integer — the maximum possible number of operations that can be performed.

*/


#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    
    start = clock(); // Record the start time

    int t;
    scanf("%d", &t);
    while (t--) {
        int l, r, k;
        scanf("%d %d %d", &l, &r, &k);
        
        if (l == r) {
            printf("%d\n", (k <= 1) ? 1 : 0);
            continue;
        }
        
        if (k == 1) {
            printf("%d\n", r - l + 1);
            continue;
        }
        
        int total_numbers = r - l + 1;
        int max_x = r / k;
        int count = 0;
        
        if (l == 1) {
            int low = 2;
            int high = max_x;
            if (high >= low) {
                count = high - low + 1;
            }
            if (total_numbers >= k) {
                count += 1;
            }
        } else {
            int low = l;
            int high = (max_x > r) ? r : max_x;
            if (high >= low) {
                count = high - low + 1;
            }
        }
        
        printf("%d\n", count);
    }

    end = clock(); // Record the end time
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // Calculate the time taken in seconds

    fprintf(stderr, "Execution time: %f seconds\n", cpu_time_used); // Print the execution time to stderr

    return 0;
}
