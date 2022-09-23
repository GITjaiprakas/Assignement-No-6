#include<stdio.h>
    int main(){
        int n,sum=0; 
        printf("Enter the numbers upto which you want : ");
        scanf("%d",&n);
        while(n>0){
            sum=sum+n;
            n--;
        }
        printf("%d",sum);
        return 0;
    }
