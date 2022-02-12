//1) Fazer um programa para ler um número e imprimir uma mensagem informando se ele é positivo, negativo ou igual a zero.

#include <stdio.h>
#include <math.h>
int main(){ 
    int num;
    printf("Let see if your number is positive, negative or zero: \n ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Your number is 0 \n");
    }
    else
    {   
        if (num>0) {
            printf("Your number is positive \n");
        }
        else{
            printf("Your number is negative \n");
        }
    }   
}