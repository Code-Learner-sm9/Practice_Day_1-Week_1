#include<stdio.h>
int main(){
    int num;
    printf("Enter one integer value: ");
    scanf("%d",&num);
    if(num>0){
        printf("positive");
    }
    else if(num<0){
        printf("negative");
    }
    else{
        printf("zero");
    }

    return 0;
}