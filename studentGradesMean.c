#include <stdio.h>
int main ()
{
 float notas[3];
 char nome[50]; // Um vetor de caracteres ou "string".
 int count;
 for (count = 0; count < 30; count = count + 1)
 {
  printf ("\n Enter the student name: \n");
  gets(nome);
  printf ("Enter its 2 grades \n");
  printf ("Fist grade: ");
  scanf ("%f", &notas[0]);
  printf ("Second grade: ");
  scanf ("%f", &notas[1]);
  notas[2] = ( notas[0] + notas[1] ) / 2.0;
  printf (" \n The mean of %s is  %f: \n", nome, notas[2] );
 }
}
