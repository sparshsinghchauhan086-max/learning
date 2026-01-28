#include<stdio.h>
int main(){
double x1,x2,x3,y1,y2,y3;
double m1,m2;
x1=5;
x2=7;
x3=8;
y1=8;
y2=5;
y3=7;


m1= (y2-y1)/(x2-x1);
m2= (y3-y2)/(x3-x2);
if(m1==m2){
    printf("these points are collinear");
}
else{
    printf("non collinear");
}


    return 0;
}