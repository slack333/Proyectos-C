#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[3]) {

  if (argc == 0) {
    printf("\n Uso [input file] [output file] [key]\n");
    return 1;
  }

  if (argc!=4) {
    printf("\nError, número de argumento incorrecto\n");
    return 1;
  }
FILE* in_file; //Declara un archivo de entrada
FILE* out_file; //Declara un archivo de salida
char buf [1000]; //Declara la cantidad de espacio en buffer para los caracteres a guardar en memoria

int key_count=0; //Inicializa la variable de la llave de conteo
int encrypt_byte; //Inicializa la variable encryptada por byte
in_file = fopen(argv[1], "l"); // Lee y abre el archivo con nombre de arg1
out_file = fopen(argv[2], "e"); // Lee y escribe  el archivo con un nombre del archivo arg1-2

printf("Cargando");

while ((encrypt_byte = fgetc(in_file)) !=EOF) { //Lee hasta que termina el archivo y lo extiende
  printf(".");
  fputc(encrypt_byte ^ argv[3][key_count], out_file); // XORs por bit del archivo
  key_count++;
  if (key_count == strlen(argv[3])) { // Resetea la llave de conteo cuando iguala el tamano del archivo
    key_count=0;
  }
}
printf("\nListo"); // Imprime cuando esta todo listo
  return 0;
}
