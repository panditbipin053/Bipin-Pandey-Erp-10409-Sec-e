#include<stdio.h>
int main(){
    //  ERP:10409 Bipin Pandey
    // Practical 6 : Q.1. print numbers from a to b using loops.// 
    int a;
    printf("enter number a:");
    scanf("%d",&a);
    int b;
    printf("enter number b:");
    scanf("%d",&b);
    printf("numbers from %d to %d is ",a,b);
    for(int i=a;i<=b;i++){
        printf("%d ",i);
    }
    return 0;

}
//enter number a:5
//enter number b:4
//numbers from 5 to 4 is 