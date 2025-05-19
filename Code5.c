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
