#include <stdio.h>
void main()
{
  int a, b, c;
  int b = 95, 
  int c = 0;
  int d = 0;
  
  printf("Bienvenido al restaurante :)\n");
  printf("Ingrese el número de personas: ");
  scanf("%d", &a);
  
  if (a>200)
  {
    if (a<=300)
    {
        b = 85;
    }
    else  
    {
        b = 75;
    }
  }
  
  c = a * b;
  d = c / a;
  
  printf("El costo total es: %d\n", c);
  printf("El costo por persona es: %d\n", d);
}
