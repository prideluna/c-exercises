#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
   int n, i = 2;
   bool is_prime;
    printf("\n");
   printf("Enter a number: ");
   scanf("%d", &n);

   is_prime = true;

   while (i <= sqrt(n))
   {
      if (n % i == 0)
      {
         is_prime = false;
         break;
      }
      i++;
   }
      if (is_prime == true)
      {
         printf("You have a prime number!\n");
      }
      else
      {
         printf("It is not a prime number! \n");
      }
      printf("\n");

}
