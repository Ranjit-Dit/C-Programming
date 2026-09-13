#include<stdio.h>

int main(){
    int sum = 0, i = 1,num;
    int count;
    printf("enter the number of inputs : ");
    scanf("%d",&count);

    while(i<=count){
        printf("Enter the number : ");
        scanf("%d",&num);
        sum+=num;
        i++;
    }
    printf("So the sum is %d",sum);
    return 0;
}