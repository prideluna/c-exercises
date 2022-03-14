#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;

    printf("Enter 3 numbers:\n ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if (a == b and b== c and c ==a){
        printf("Your triangle will be equilateral \n");
    }
    else 
    {
        if (a != b and b != c and a != c)
        {
            printf("Your triangle will be scalene \n");
        }
        else 
        {
            printf("Your triangle will be isosceles \n");
        }
    }  
}
