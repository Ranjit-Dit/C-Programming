#include <stdio.h>


int main() {
    int arr [] ={
        5,4,3,1,2
    };

    for(int i=1;i<5;i++){
        if(arr[i]<3){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}