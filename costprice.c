#include<stdio.h>
int main(){
    int cp,sp;
    printf(" %d cost price" , cp);
    scanf("%d"  , &cp  );
    printf("%d selling price " , sp);
    scanf("%d" , &sp);
    if(sp>cp){
        printf("profit");
    }
    else{
        printf("loss");
    }
    return 0;
}

    

