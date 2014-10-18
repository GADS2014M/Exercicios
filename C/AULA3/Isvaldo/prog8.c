#include "stdio.h"
main()
{
  int long a, b, auxiliar,n;

  a = 0;
  b = 1;

  printf("Série de Fibonacci:\n");
  printf("%d\n", b);

  for(;;)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
    printf("%d\n", auxiliar);
    getchar();
  }
}
