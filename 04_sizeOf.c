#include<stdio.h>
int main(){
    int number = 1146;
    char letter = 'A';
    float percentage = 55.33;
    double price = 44555.33;

    printf("\nByte Size of Int : %d bytes",sizeof(number));
    printf("\nByte Size of Char : %d bytes",sizeof(letter));
    printf("\nByte Size of float : %d bytes",sizeof(percentage));
    printf("\nByte Size of double : %d bytes",sizeof(price));
    printf("\nByte Size of long double : %d bytes",sizeof(long double));
    printf("\nByte Size of long int : %d bytes",sizeof(long int));

    return 0;
}