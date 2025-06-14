/*
You are given two integers x and y of the same length, consisting of digits from 1 to 9
You can perform the following operation any number of times (possibly zero): swap the i-th digit in x and the i-th digit in y

For example, if x=73
and y=31, you can swap the 2-nd digits and get x=71 and y=33
Your task is to maximize the product of x and y using the aforementioned operation any number of times. If there are multiple answers, print any of them.
Input
The first line contains a single integer t
(1≤t≤1000) — the number of test cases.

The first line of each test case contains a single integer x
(1≤x<10100).

The second line of each test case contains a single integer y
(1≤y<10100).

Additional constraint on input: the integers x
and y consist only of digits from 1 to 9

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        int n = a.size();
        bool taken = false;

        for (int i = 0; i < n; i++) {
            if (!taken) {
                // First time we see a[i] != b[i], decide greedily
                if (a[i] == b[i]) continue;

                if (a[i] < b[i]) {
                    swap(a[i], b[i]);
                }
                taken = true;
            } else {
                // After that, try to make product larger by putting larger digits in b
                if (a[i] > b[i]) {
                    swap(a[i], b[i]);
                }
            }
        }

        cout << a << '\n' << b << '\n';
    }

    return 0;
}
