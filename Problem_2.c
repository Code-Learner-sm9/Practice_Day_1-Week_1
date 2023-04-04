#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two integer values:");
    scanf("%d %d",&a,&b);
    int sum= a+b;
    int mns= a-b;
    int mlt=a*b;
    float div=a*1.0/b;
    // printf("%d %d %d %0.2lf",sum,mns,mlt,div);
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d + %d = %d\n",a,b,mns);
    printf("%d + %d = %d\n",a,b,mlt);
    printf("%d + %d = %d",a,b,div);


    return 0;
}