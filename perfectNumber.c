#include<stdio.h>

int main(){
    int num,copy,i=1,sum=0;
    printf("Enter the no. for factors : ");
    scanf("%d",&num);
    copy=num;

    while(copy>1){

        if(copy%i==0){
            printf("%d ",i);
            sum+=i;
            copy /=i;
        }
        i++;
    }
    if(sum==num)
        printf("%d is perfect number",num);
    else
        printf("%d is not the perfect number.",num);
    return 0;
}