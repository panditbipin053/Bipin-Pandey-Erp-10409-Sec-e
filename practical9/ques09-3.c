#include <stdio.h>

int main() {
    //ERP :10409  Bipin pandey
    //practical:9 ques3: sum of all even elements of an array
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
//Enter number of elements: 6
//Enter array elements:
//10 15 20 25 30 35