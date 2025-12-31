#include <stdio.h>

int main() {
    //ERP: 10409 Bipin pandey
    // practical10: ques2: sum of diagnol elements of 2d array
    int n, i, j, sum = 0;
    int arr[10][10];

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
//Enter order of square matrix: 3
//Enter elements:
//1 2 3
//4 5 6
//7 8 9