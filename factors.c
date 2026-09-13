#include<stdio.h>

int main(){
    int num,copy,i=2;
    printf("Enter the no. for factors : ");
    scanf("%d",&num);
    copy=num;

    while(copy>1){

        if(copy%i==0){
            printf(" %d , ",i);
            copy /=i;
            i=2;
        }
        else
            i++;
    }
    return 0;
}