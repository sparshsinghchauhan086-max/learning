#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("p is " );
    scanf("%f"  , &p);
    printf(" r is " );
    scanf("%f", &r);
    printf(" t is ");
    scanf("%f", &t);
    si = p*r*t/100;
    printf("  simple interest is %f", si );
    return 0 ;
}
