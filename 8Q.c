#include<stdio.h>
    int main(){
        int n,i;
        printf("Enter a number : ");
        scanf("%d",&n);
        i=n;
        n=n/2;
        while(n>1){
            if(i%n==0){
                break;
            }
            n--;
        }
        if(n==1){
            printf("The number is a prime number");
        }
        else{
            printf("the number is a not prime number");
        }
        return 0;
    }
