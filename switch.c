/* Sentencia switch ()

switch (selector){
case etiqueta1 : sentencia1;break;
case etiqueta2 : sentencia2;break;
case etiqueta3 : sentencia3;break;

default: sentencias;


} */

#include <stdio.h>

int main() {
  int numero;
  char vocal;


    printf("\nDigite un numero entre (1-3) y seguido, una vocal: ");
    printf("\nPara salir de esta opción digite cualquier tecla.\n");
    scanf("%i %c", &numero, &vocal);

    switch (numero) {
      case 1: printf("\nEs el número 1\n"); break;
      case 2: printf("\nEs el número 2\n"); break;
      case 3: printf("\nEs el número 3\n"); break;
      default: printf("\nNo ha digitado un número correcto.\n");
    }

    switch (vocal) {
      case 'a': printf("\nVocal a\n"); break;
      case 'e': printf("\nVocal e\n"); break;
      case 'i': printf("\nVocal i\n"); break;
      case 'o': printf("\nVocal o\n"); break;
      case 'u': printf("\nVocal u\n"); break;
      default: printf("\nNo ha digitado una vocal correcta.\n");
    }

  return 0;
}
