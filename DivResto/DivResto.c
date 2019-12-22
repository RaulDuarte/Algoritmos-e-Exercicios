#include "stdio.h"

int main()
{
  int dividendo, divisor, resultado, resto;

  scanf("%d %d", &dividendo, &divisor);

  resultado = dividendo/divisor;
  resto = dividendo%divisor;

  printf("%d %d\n", resultado, resto);
  
  return(0);
}