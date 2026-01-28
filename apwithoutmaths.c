#include<stdio.h>
int main(){
int n;
printf("enter a number");
scanf("%d" ,&n);
int x;
for(int i=1;i<=n;i++){
    printf("%d" ,x);
    x=x+3;
}
    return 0;
}