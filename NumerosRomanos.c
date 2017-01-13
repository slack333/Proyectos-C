#include "stdio.h"

int main() {

  int numero, unidades, decenas, centenas, millar;
  printf("Digite un número: "); scanf("%i", &numero);

  unidades = numero%10; numero = numero/10;
  decenas = numero%10; numero = numero/10;
  centenas = numero%10; numero = numero/10;
  millar = numero%10; numero = numero/10;

  switch (millar) {
    case 1: printf("M\n"); break;
    case 2: printf("MM\n"); break;
    case 3: printf("MMM\n"); break;
  }
  switch (centenas) {
    case 1: printf("C\n"); break;
    case 2: printf("CC\n"); break;
    case 3: printf("CCC\n"); break;
    case 4: printf("CD\n"); break;
    case 5: printf("D\n"); break;
    case 6: printf("DC\n"); break;
    case 7: printf("DCC\n"); break;
    case 8: printf("DCCC\n"); break;
    case 9: printf("CM\n"); break;
  }
  switch (decenas) {
    case 1: printf("X\n"); break;
    case 2: printf("XX\n"); break;
    case 3: printf("XXX\n"); break;
    case 4: printf("XL\n"); break;
    case 5: printf("L\n"); break;
    case 6: printf("LX\n"); break;
    case 7: printf("LXX\n"); break;
    case 8: printf("LXXX\n"); break;
    case 9: printf("XC\n"); break;
  }
  switch (unidades) {
    case 1: printf("I\n"); break;
    case 2: printf("II\n"); break;
    case 3: printf("III\n"); break;
    case 4: printf("IV\n"); break;
    case 5: printf("V\n"); break;
    case 6: printf("VI\n"); break;
    case 7: printf("VII\n"); break;
    case 8: printf("VIII\n"); break;
    case 9: printf("IX\n"); break;
  }
  return 0;
}
