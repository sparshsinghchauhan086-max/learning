#include<stdio.h>
int main() {
    float x;
    printf("enter a decimal number " );
    scanf("%f", &x);
    int y;
    printf("enter a numeric value");
    scanf("%d" , &y);
    float z = x-y;
    printf ("decimal part %f", z);
    return 0 ;
}