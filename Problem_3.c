#include<stdio.h>
int main(){
    int num;
    printf("Enter one non-negative integer: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }

    return 0;
}