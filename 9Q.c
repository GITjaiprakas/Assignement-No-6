#include<stdio.h>
    int main(){
        int n1,n2,i;
        printf("Enter first number and second number : ");
        scanf("%d %d",&n1,&n2);
        if(n1>n2){
            for(i=1;i<=n2;i++){
                if(n1*i%n2==0){
                    break;
                }
            } 
            printf("lcm of %d and %d is %d",n1,n2,n1*i);   
        }
        else if(n2>n1){
            for(i=1;i<=n1;i++){
                if(n2*i%n1==0){   
                    break;
                }
            }
            printf("lcm of %d and %d is %d",n1,n2,n2*i);
        }
        else{
            printf("The lcm of %d and %d is %d",n1,n2,n1);
        }
        return 0;
    }
