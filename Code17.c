/*
Let's define S(x) to be the sum of digits of number x written in decimal system. For example, S(5)=5, S(10)=1, S(322)=7
We will call an integer x
interesting if S(x+1)<S(x). In each test you will be given one integer n. Your task is to calculate the number of integers x such that 1≤x≤n and x is interesting.
Input

The first line contains one integer t
(1≤t≤1000)  — number of test cases.

Then t
lines follow, the i-th line contains one integer n (1≤n≤109) for the i-th test case.
Output

Print t
integers, the i-th should be the answer for the i-th test case.
*/


/*#include <stdio.h>
int sod(int k){
    int sum=0;
    while(k!=0){
        int c = k%10;
        sum += c;
        k = k/10;
    }
    return sum;
}

int main() 
{
    int t;
    scanf("%d", &t);
    while(t--){
        int count=0, n=0;
        scanf("%d", &n);
        for(int x=1; x<=n; x++){
            if(sod(x+1) < sod(x)){
                count++;
            }
        }
        printf("%d\n", count);
        
    }
}*/

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", n / 10 + (n % 10 == 9));
    }
    return 0;
}








