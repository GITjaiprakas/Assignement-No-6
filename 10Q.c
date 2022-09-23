#include<stdio.h>
    int main(){
        int t,n,rev,count=1,r; 
        printf("Enter the number : ");
        scanf("%d",&n);
        t=n;
        while(t>9){
            t=t/10;
            count=count*10;
        }
        while(n>0){
            r=(n%10)*count;
            rev=r+rev;
            n=n/10;
            count=count/10;
        }
        printf("the reverse of the number is %d",rev);
        return 0;
    }
