/*
Klee has an array a of length n containing integers [k,k+1,...,k+n−1] in that order. Klee wants to choose an index i (1≤i≤n) such that x=|a1+a2+⋯+ai−ai+1−⋯−an| is minimized. Note that for an arbitrary integer z, |z| represents the absolute value of z
Output the minimum possible value of x

Input

The first line contains t
(1≤t≤104) — the number of test cases.

Each test case contains two integers n
and k (2≤n,k≤109) — the length of the array and the starting element of the array.
Output

For each test case, output the minimum value of x
on a new line.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        ll n, k;
        scanf("%lld %lld", &n, &k);

        ll low = k;
        ll high = k + n - 1;
        ll ans = LLONG_MAX;

        while (low <= high) {
            ll mid = (low + high) / 2;

            ll len1 = mid - k;
            ll half1 = 0;
            if (len1 > 0) {
                ll first = k;
                ll last = mid - 1;
                half1 = (first + last) * len1 / 2;
            }

            ll len2 = k + n - mid;
            ll half2 = 0;
            if (len2 > 0) {
                ll first = mid;
                ll last = k + n - 1;
                half2 = (first + last) * len2 / 2;
            }

            ll diff = llabs(half1 - half2);
            if (diff < ans) ans = diff;

            if (half1 == half2) {
                break;
            } else if (half1 > half2) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
