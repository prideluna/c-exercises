
#include <stdio.h>
#include <math.h>

int main(){
    int num;
    
    printf("Enter a number and let see if it is even or odd: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Your number is neither odd or even...It's zero!\n");
    } 
    else
    {
        if (( num%2 == 0))
        {
            printf("%d is an even number!\n", num);
        }
        else 
        {
            printf("%d is an odd number!\n", num);
        }
    }
}
