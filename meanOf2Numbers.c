
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    float mean;

    while(a!=0 && b!=0)
    {
        printf("Enter 2 number to print out the mean: \n");
        printf("First number: ");
        scanf("%d", &a);
        printf("Second number: ");
        scanf("%d", &b);
        media = (a+b)/2;
        printf("The mean of (%d,%d) is: %.2f\n", a, b, mean);
        printf("\n");
    }
}
