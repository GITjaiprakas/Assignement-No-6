
#include<stdio.h>
    int main(){
        int n1,n2,i,j,k;
        printf("Enter first number and second number : ");
        scanf("%d %d",&n1,&n2);
        i=n1>n2?n1:n2;
        j=n1<n2?n1:n2;
        for(k=1;k<=j;k++){
            if(i*k%j==0){
                break;
            }
        } 
        printf("lcm of %d and %d is %d",n1,n2,i*k);           
        return 0;
    }
