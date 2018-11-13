/* Fibonacci serie en C */
#include <stdio.h>
 
int main()
{
  int n, first = 0, second = 1, next, c;
 
  printf("Ingrese el numero de terminos\n");
  scanf("%d", &n);
 
  printf("Los primeros %d terminos de la serie de Fibonacci son :\n", n);
 
  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }
 
  return 0;
}




