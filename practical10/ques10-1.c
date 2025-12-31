#include <stdio.h>

int main() {
    //ERP: 10409 Bipin pandey
    // practical10 ques1: max and min element in 2D array
    int r, c, i, j;
    int arr[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    int min = arr[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
//Enter rows and columns: 2 3
//Enter elements:
//5 9 2
//8 1 6