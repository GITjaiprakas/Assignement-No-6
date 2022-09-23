#include<stdio.h>
    int main(){
        int n,sum=0;
        printf("Enter the natural numbers : ");
        scanf("%d",&n);
        for(int i=n;i>0;i--){
            sum=sum+i*2;
        }
        printf("%d",sum);
        return 0;
    }
