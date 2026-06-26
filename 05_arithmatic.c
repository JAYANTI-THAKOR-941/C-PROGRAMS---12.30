#include<stdio.h>
int main(){
    
    int num1,num2;
    char name[50];

    printf("Enter your name:");
    scanf("%s",name);

    printf("\nEnter number1:");
    scanf("%d",&num1);

    printf("Enter number2:");
    scanf("%d",&num2);

    printf("\nName is:%s",name);
    printf("\nAddition : %d",num1+num2);
    return 0;
}