/*
n order to test his patients' intelligence, Dr. TC created the following test.

First, he creates a binary string∗
s having n characters. Then, he creates n binary strings a1,a2,…,an. It is known that ai is created by first copying s, then flipping the i'th character (1 becomes 0 and vice versa). After creating all n strings, he arranges them into a grid where the i'th row is ai

.

For example,

    If s=101

, a=[001,111,100]
.
If s=0000
, a=[1000,0100,0010,0001]

    . 

The patient needs to count the number of 1

s written on the board in less than a second. Can you pass the test?

∗
A binary string is a string that only consists of characters 1 and 0

.
Input

The first line of the input consists of a single integer t
(1≤t≤1000

) — the number of test cases.

The first line of each test case contains a single integer n
(1≤n≤10) — the length of the binary string s

.

The second line of each test case contains a single binary string s
of size n

.
Output

For each test case, output a single integer, the number of 1
s on the board.

*/


#include<stdio.h>

int main()
{
    int numberoftestcases;
    scanf("%d", &numberoftestcases);
    
    for(int i = 0; i < numberoftestcases; i++) {
        int lengthofstring = 0;
        scanf("%d", &lengthofstring);
        
        char s[15]; 
        scanf("%s", s); 
        
        int bitstring[15];
        for(int j = 0; j < lengthofstring; j++) {
            bitstring[j] = s[j] - '0'; 
        }
        
        int count = 0;
        int bitmatrix[15][15];
        
        for(int l = 0; l < lengthofstring; l++) {
            for(int m = 0; m < lengthofstring; m++) {
                bitmatrix[l][m] = bitstring[m];
                if(l == m) {
                    bitmatrix[l][m] = 1 - bitmatrix[l][m]; 
                }
            }
        }
        
        for(int l = 0; l < lengthofstring; l++) {
            for(int m = 0; m < lengthofstring; m++) {
                if(bitmatrix[l][m] == 1) {
                    count++;
                }
            }
        }
        
        printf("%d\n", count); 
    }
    
    return 0;
}
