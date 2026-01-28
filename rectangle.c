#include<stdio.h>
int main()
{
int l,b,a,p;
printf("enter length" ,l);
scanf("%d" , &l);
printf("enter breadth" , b);
scanf("%d", &b);
a=l*b;
p=2*(l+b);
if(a>p){
    printf("area is greater than perimeter");

}
else{
    printf("perimeter is greater than area");
}




    return 0 ;
}