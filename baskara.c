//2) Refaça o programa para calcular as raizes de uma equação do segundo grau através da fórmula de Báscara, dando respostas
//diferentes para os casos: delta menor que zero, igual ao zero ou maior que zero.

#include <stdio.h>
#include <math.h>

int main(){
    int delta;
    int a, b, c;
    float x1, x2;

    printf("Give me 3 equation index: \n");
    
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    delta = ((b*b)-(4*a*c));
    //sqrtDelta = sqrt(delta);
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    if (delta < 0)
    {
        printf("Congratulations! You have an imaginary number for x! \n");
    }
    else
    {
        if (delta = 0){
              printf("Delta: %d. The values for x is %.1f and %.1f \n", x1, x2);
        }
        else {
            printf("Delta: %d. The values for  x is %.1f and %.1f \n", x1, x2);
        }
      
    }
    
}
