#include <stdio.h>

int main() {
    //ERP:10409 Bipin pandey
    //practical10: ques3: row wise sum of 2d array
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

    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
//Enter rows and columns: 3 3
//Enter elements:
//1 2 3
//4 5 6
//7 8 9