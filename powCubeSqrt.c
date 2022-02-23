#include<stdio.h>
#include<math.h>

int main (){
    int a;
    float powered2,squareRoot,cube;
    printf("Enter a integer number: ");
    scanf("%d", &a);

    while (a!=0){
    powered2 = pow(a,2);
    squareRoot = sqrt(a);
    cube = pow(a,3);
    printf(" %d powered by 2, square root and its cube is: %.0f, %.3f and %.0f\n",a, powered2, squareRoot, cube);
    a= a-1;
    }

    
}
