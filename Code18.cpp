/*
We define function f(x, l, r) as a bitwise OR of integers xl, xl + 1, ..., xr, where xi is the i-th element of the array x. You are given two arrays a and b of length n. You need to determine the maximum value of sum f(a, l, r) + f(b, l, r) among all possible 1 ≤ l ≤ r ≤ n.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n{0};
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0; i<n; i++){
        cin >> a.at(i);
    }
    for(int i=0; i<n; i++){
        cin >> b.at(i);
    }
    int sum{0};
    for(int i=0; i<n; i++){
        int a_or{0};
        int b_or{0};
        for(int j=i; j<n; j++){
            a_or |= a.at(j);
            b_or |= b.at(j);
            sum = max(sum, (a_or+b_or));            
        }
    }
    cout << sum << endl; 
}
