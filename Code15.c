#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int arr[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        int k = 4;
        int found = 0;
        while (k--) {
            if (arr[0][0] < arr[0][1] && 
                arr[0][0] < arr[1][0] &&
                arr[0][1] < arr[1][1] && 
                arr[1][0] < arr[1][1]) {
                printf("YES\n");
                found = 1;
                break;
            }

            int temp = arr[0][0];
            arr[0][0] = arr[1][0];
            arr[1][0] = arr[1][1];
            arr[1][1] = arr[0][1];
            arr[0][1] = temp;
        }

        if (!found) {
            printf("NO\n");
        }
    }
    return 0;
}
