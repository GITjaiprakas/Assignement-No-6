#include<stdio.h>
    int main(){
        int n,sum=0;
        printf("Enter the natural numbers : ");
        scanf("%d",&n);
        while(n>0){
            sum=sum+n*n;
            n--;
        }
        printf("%d",sum);
        return 0;
    }
