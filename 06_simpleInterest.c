#include<stdio.h>

int main(){

    int amount,month,simpleInterest;
    float rate;

    printf("Enter an amount:");
    scanf("%d",&amount);

    printf("Enter a number of months:");
    scanf("%d",&month);

    printf("Enter interestRate:");
    scanf("%f",&rate);

    simpleInterest = amount * month * rate / 100;

    printf("Simple Interest:%d",simpleInterest);

    return 0;


}