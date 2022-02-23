#include<stdio.h>
#include<math.h>

int main(){
    int n, i, mult =1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i =1; i<n; n--){
        mult = mult*n;
    }
    printf("The fatorial is %d\n", mult);

    }
