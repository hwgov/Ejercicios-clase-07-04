#include <stdio.h>
int main()
{
  float n1, n2, res;
  int op = 0;
  res = 0;
  printf("Bienvenid@ a mi calculadora :)\n");
  printf("Escoge una opción\n");
  printf("1.- Suma\n");
  printf("2.- Resta\n");
  printf("3.- Multiplicación\n");
  printf("4.- División\n");
  printf("Opción : ");
  scanf("%d", &op);
  printf("Ingresa dos cantidades separadas por espacio\n");
  scanf("%f %f", &n1, &n2);
  
  switch(op)
  {
    default:
      printf("Opción no válida\n");
    case 1: 
      res = n1 + n2;
    break;
    case 2:
      res = n1 - n2;
    break;
    case 3:
      res = n1 * n2;
    break;
    case 4:
      res = n1 / n2;
    break;
  }
  printf("El resultado es: %f\n", res);
  return 0;
}



