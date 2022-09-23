    #include<stdio.h>
    int main(){
        int f,i;
        printf("Enter the number to calculate it's factorial : ");
        scanf("%d",&f);
        i=f;
        do{
            i=i*(f-1);
            f--;
        }
        while(f>2);
        printf("%d",i);
        return 0;
    }
