#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter first number" , x);
    scanf("%d" ,&x);
    printf("enter second number" , y);
    scanf("%d" , &y);
    printf("enter third number");
    scanf("%d" , &z);
    if(x>y && x>z)
    {
        printf("%d is greatest" , x);
    }
    if(y>x && y>z)
    {
        printf("%d is greatest" , y);
    }
    if(z>x && z>y)
    {
        printf("%d is greatest" , z);
    }
    return 0;
    }