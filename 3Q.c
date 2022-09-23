#include<stdio.h>
    int main(){
        int n,sum=0;
        printf("Enter the numbers upto which you want the sum of odd numbers : ");
        scanf("%d",&n);
        while(n>0){
            sum=sum+n*2-1;
            n--;
        }
        printf("%d",sum);
        return 0;
    }
