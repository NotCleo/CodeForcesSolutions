/*A square of positive (strictly greater than 0

) area is located on the coordinate plane, with sides parallel to the coordinate axes. You are given the coordinates of its corners, in random order. Your task is to find the area of the square.
Input

Each test consists of several testcases. The first line contains one integer t
(1≤t≤100

) — the number of testcases. The following is a description of the testcases.

Each testcase contains four lines, each line contains two integers xi,yi
(−1000≤xi,yi≤1000

), coordinates of the corners of the square.

It is guaranteed that there is a square with sides parallel to the coordinate axes, with positive (strictly greater than 0

) area, with corners in given points.
Output

For each test case, print a single integer, the area of the square.
  
*/

#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
int x[4],y[4];
for(int j = 0; j<t; j++)
    {
        for(int i=0; i<4;i++)
            {
                scanf("%d %d\n", &x[i], &y[i]);
            }
        for(int z=1; z<4; z++)
            {
                if(x[0]==x[z])
                    {
                        printf("%d\n", ((y[z]-y[0])*(y[z]-y[0])));
                        break ;
                    }
            }
        for(int i=0; i<4; i++)
            {
                x[i]=0;
                y[i]=0;
            }
    }
 
}
