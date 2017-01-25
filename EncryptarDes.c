//Este código es libre

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
    FILE *in,
         *out;
    char *key;
    int c,
        len;

    if(argc != 4){
        printf("Uso: %s [archivo de entrada] [archivo de salida] [llave de encryptación]\n", *argv);
        return 1;
    }

    in  = fopen(argv[1], "r"); //Lee y abre archivo
    out = fopen(argv[2], "w"); //Lee y escribe archivo nuevo
    key = argv[3]; //Inicializa la llave 
    len = strlen(key);

    printf("\nCargando");

    while( (c = fgetc(in)) != EOF){
        printf(".");
        fputc(c ^ *key, out);
        key = key == argv[3] + len ? argv[3] : key + 1;
    }

    fclose(in);
    fclose(out);

    printf("\n\n\tListo\n\n"); // Imprime cuando esta todo listo
    return 0;
}
