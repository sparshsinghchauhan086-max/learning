#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first side" , a);
    scanf("%d" ,&a);
    printf("enter second side" , b);
    scanf("%d" ,&b);
    printf("enter third side" , c);
    scanf("%d" ,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("valid triangle");
    }
    else{
        printf("not valid triangle");
    }
    return 0;
}