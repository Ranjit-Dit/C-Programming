<<<<<<< HEAD
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
=======
#include <stdio.h>

int main()
{
    int num;
    printf("1000030928\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            printf("%d ", i);
    }

>>>>>>> master
    return 0;
}