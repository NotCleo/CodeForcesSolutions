/*
Little Rosie has a phone with a desktop (or launcher, as it is also called). The desktop can consist of several screens. Each screen is represented as a grid of size 5×3

, i.e., five rows and three columns.

There are x
applications with an icon size of 1×1 cells; such an icon occupies only one cell of the screen. There are also y applications with an icon size of 2×2 cells; such an icon occupies a square of 4

cells on the screen. Each cell of each screen can be occupied by no more than one icon.

Rosie wants to place the application icons on the minimum number of screens. Help her find the minimum number of screens needed.
Input

The first line of the input contains t
(1≤t≤104

) — the number of test cases.

The first and only line of each test case contains two integers x
and y (0≤x,y≤99) — the number of applications with a 1×1 icon and the number of applications with a 2×2

icon, respectively.
Output

For each test case, output the minimal number of required screens on a separate line.
*/


#include <stdio.h>
#include <time.h>
int ceil_div(int a, int b){
    return (a + b - 1) / b;
}
int main(){
    clock_t start, end;
    double cpu_time_used;
    start = clock(); // Record the start time
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);

        int screens_for_2x2 = ceil_div(y, 2);
        int used_cells_by_2x2 = y * 4;
        int total_cells_used = screens_for_2x2 * 15;

        int remaining_cells = total_cells_used - used_cells_by_2x2;
        int remaining_1x1 = x - remaining_cells;
        if (remaining_1x1 < 0) remaining_1x1 = 0;

        int additional_screens = ceil_div(remaining_1x1, 15);
        int total_screens = screens_for_2x2 + additional_screens;

        printf("%d\n", total_screens);
       
    }
    end = clock(); // Record the end time
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // Calculate the time taken in seconds
    
    fprintf(stderr, "Execution time: %f seconds\n", cpu_time_used); // Print the execution time to stderr
}
