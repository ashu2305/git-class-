#include<stdio.h>
int main (){
    int a, b;

    printf("Enter any integer : ");
    scanf("%d",&a);
    b=0;
    for (int i = 2; i < a; i++)
    {
        int v=a%i;
        if(v==0){
            printf("%d is not a prime number\n", a);
            b=0;
            break;
        }
        else{
             b=1;
        }
    }
    if(b==1){
        printf("%d is a prime number", a);
    }
   
}