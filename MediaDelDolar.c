//Calculo de media del dolar
//El codigo de este programa es libre escrito por slack333

#include <stdio.h> //Standad input output header

int main() {
  float dcompra,dventa,media; //variables compra y venta, y la media
  int var = 2; //variable = 2 se utilizara para dividir entre los 2 precios

  printf("Bienvenido al programa Cálculo de media del dólar\n\n");

  printf("Ingrese el valor de compra: "); scanf("%f", &dcompra); //ingreso de precio de compra
  printf("Ingrese el valor de venta: "); scanf("%f", &dventa); //ingreso de precio de venta

  media = (dcompra + dventa)/var; //calculo de la media

  printf("El valor de la media del dolar es: %.2f\n\n", media); //impresion del resultado 

  return 0;
}
