#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int array[], int tamanho)
{
  int i;
  for (i = 0; i < tamanho; i++)
  {
    array[i] = rand() % 200 + 1;
  }
}

void imprimir(int array[], int tamanho)
{
  int i;
  for (i = 0; i < tamanho; i++)
  {
    printf("%d ", array[i]);
  }
}

int main()
{
  int array[50];
  srand(time(NULL));
  preencher(array, 50);
  imprimir(array, 50);
  return 0;
}