#include<stdio.h>
int main(){
int marks;
printf("enter marks");
scanf("%d",  &marks);
if(marks>90){
    printf("A grade");
}
else if (marks>60){
printf("b grade");
}
else if (marks>40){
    printf("d grade");
}
else{
    printf("d grade");
}
    return 0;
}