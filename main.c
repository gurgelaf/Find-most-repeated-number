#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define size 100
#define rsize size-1

char buscarmaisrepetido (char* x) {
  char i, *aux = calloc (size,1), max = 0, res;

  for (i = 0; i < size; i++) {
    aux[x[i]]++;
    if (aux[x[i]] > max) {
      max = aux[x[i]];
      res = x[i];
    }
  }

  return res;
}
int main(void) {
  char* x = malloc(size); //array
  srand(time(0)); //random

  //view te values in array:
  for (char i = 0; i < size;i++) {
    x[i] = rand()%100+1;
    printf("%i,", x[i]);
  }

  //print the most repeated number:
  printf("\n\n%i\n", buscarmaisrepetido(x));
  
  return 0;
}
