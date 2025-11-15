#include<stdio.h>

int main(){
    int a,b;

    printf("Enter ur numbers: ");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    a=a*b;
    b=a/b;
    a=a/b;

    a=a^b;
    b=a^b;
    a=a^b;

    return 0;
}