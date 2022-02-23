#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;

    printf("Enter 3 integer numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a>b and a>c)
    {
        if(b>c)
        {
            printf("Ordered: %d, %d, %d\n", a, b, c);
        }
        else
        {
            printf("Ordered: %d, %d, %d\n", a, c, b);   
        }
    
    }
    else 
    {
        if (b>a and b>c)
        {
            if (a>c)
            {
                printf("Ordered: %d, %d, %d\n", b, a, c);
            }
            else
            {
                printf("Ordered: %d, %d, %d\n", b, c, a);
            }
                    
        }
        else
        {
            if (c>a and c>b)
            {
                if (a>b)
                {
                    printf("Ordered: %d, %d, %d\n", c, a, b);
                }
                else
                {
                    printf("Ordered: %d, %d, %d\n", c, b, a);
                }
            }
        }
    }   
}
