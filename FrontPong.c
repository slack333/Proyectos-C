/*Programa escrito por Bruno Aiub(slack333)
Este código es libre de copia y modificación.
No tiene garantia.*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define V 21
#define H 75

void inicio (char campo [V][H], int pelotaX, int pelotaY, int inijugador, int finjugador, int iniIA, int finIA);
void pared (char campo [V][H]);
void raquetaJ(char campo[V][H], int inijugador, int finjugador);
void raquetaIA(char campo[V][H], int iniIA, int finIA);
void pelota(char campo[V][H], int pelotaX, int pelotaY);
void leercampo(char campo[V][H]);
void gameloop(char campo [V][H], int pelotaX, int pelotaY, int inijugador, int finjugador, int iniIA, int finIA, int modifY, int modifX, int modifIA);
void draw (char campo [V][H]);
void input(char campo[V][H], int *pelotaX, int *pelotaY, int *inijugador, int *finjugador, int *iniIA, int *finIA, int *modifX, int *modifY, int *modifIA, int *gol);
void update(char campo [V][H], int pelotaX, int pelotaY, int inijugador, int finjugador, int iniIA, int finIA);
void menu();


int main() {

  int pelotaX, pelotaY, inijugador, finjugador, iniIA, finIA; //Variables de Posición
  int modifX, modifY, modifIA; //Variables de Modificación
  char campo [V][H];

  //Posición
  pelotaX = 37;
  pelotaY = 10;

  inijugador = 8;
  finjugador = 12;

  iniIA = 8;
  finIA = 12;

  //Modificación

  modifX = -1;
  modifY = -1;
  modifIA = -1;

  menu(); //Menú

  inicio (campo, pelotaX, pelotaY, inijugador, finjugador, iniIA, finIA);
  gameloop (campo, pelotaX, pelotaY, inijugador, finjugador, iniIA, finIA, modifX, modifY, modifIA);


  system ("pause");
  return 0;
}

void inicio (char campo [V][H], int pelotaX, int pelotaY, int inijugador, int finjugador, int iniIA, int finIA) {

  pared (campo);
  raquetaJ (campo, inijugador, finjugador);
  raquetaIA (campo, iniIA, finIA);
  pelota (campo, pelotaX, pelotaY);

}

void pared(char campo [V][H]) {
  int i, j;

  for (i = 0; i < V; i++) {
    for (j = 0; j < H; j++) {
      if (i == 0 || i == V-1) {
        campo[i][j] = '-';

      }else if (j == 0 || j == H - 1){
      		campo[i][j] = '|';

	    }else{
          campo[i][j] = ' ';

        }
      }
    }
  }


void raquetaJ(char campo[V][H], int inijugador, int finjugador) {
  int i, j;

  for (i = inijugador; i <= finjugador;  i++) {
    for (j = 2; j <= 3; j++) {
      campo[i][j] = '#';
    }
  }
}

void raquetaIA(char campo[V][H], int iniIA, int finIA) {
  int i, j;

  for (i = iniIA; i <= finIA; i++) {
    for (j = H - 4; j <= H - 3; j++) {
      campo[i][j] = '#';
    }
  }
}

void pelota(char campo[V][H], int pelotaX, int pelotaY) {
  campo[pelotaY][pelotaX] = 'O';
}

void leercampo(char campo[V][H]) {
  int i, j;

  for (i = 0; i < V; i++) {
    for (j = 0; j < H; j++) {
      printf("%c", campo[i][j]);
    }
    printf("\n");
  }
}

void gameloop(char campo [V][H], int pelotaX, int pelotaY, int inijugador, int finjugador, int iniIA, int finIA, int modifY, int modifX, int modifIA) {

  int tanto;
  tanto = 0;

    do {
      draw(campo); //dibujar en pantalla
      input(campo, &pelotaX, &pelotaY, &inijugador, &finjugador, &iniIA, &finIA, &modifX, &modifY, &modifIA, &tanto); //verificar y modificar las posiciones
      update(campo, pelotaX, pelotaY, inijugador, finjugador, iniIA, finIA); //actualizar la matriz 'campo'
      usleep(1); //dormir el cpu por .5 segundos
    } while(tanto == 0);
}

void draw (char campo [V][H]) {
  //while (tanto <= 10) {
  system ("clear");
  leercampo(campo);
  //printf("\t\t\t%i\n", tanto);
  //tanto++;
  //}

}

void input(char campo[V][H], int *pelotaX, int *pelotaY, int *inijugador, int *finjugador, int *iniIA, int *finIA, int *modifX, int *modifY, int *modifIA, int *tanto) {

  int i;
  char tecla;

  //Verificacion
  if (*pelotaY == 1 || *pelotaY == V - 2) {
    *modifY *= -1;
  }

  if (*pelotaX == 1 || *pelotaX == H - 2) {
    *tanto = 1;
  }

  if (*pelotaX == 4) {
    for (i = (*inijugador); i <= (*finjugador); i++) {
      if (i == (*pelotaY)) {
        *modifX *= -1;
      }
    }
  }
  if (*pelotaX == H - 5) {
    for (i = (*iniIA); i <= (*finIA); i++) {
      *modifX *= -1;
    }
  }
  if (*iniIA == 1 || *finIA == V - 1) {
    *modifIA *= -1;
  }

  //Modificación
    if (*tanto == 0) {
      //Pelota:

      *pelotaX += (*modifX);
      *pelotaY += (*modifY);

      //Raqueta de la IA

      *iniIA += (*modifIA);
      *finIA += (*modifIA);
    }



  //Raqueta del jugador

  if (1 == 1) {
    tecla = getchar(); //Lo mismo que scanf solo que no hay que pulsar enter

    if (tecla == 'w') {
      if (*inijugador != 1) {
        *inijugador -= 1;
        *finjugador -= 1;
      }
    }
    if (tecla == 's') {
      if (*finjugador != V - 2) {
        *inijugador += 1;
        *finjugador += 1;
      }
    }
  }
}

void update(char campo [V][H], int pelotaX, int pelotaY, int inijugador, int finjugador, int iniIA, int finIA) {

  pared (campo);
  raquetaJ (campo, inijugador, finjugador);
  raquetaIA (campo, iniIA, finIA);
  pelota (campo, pelotaX, pelotaY);

}

void menu() //Escojemos la dificultad del juego.
{
	char d;
	system("clear");
	printf("\nCreado por Bruno Aiub.\n"
	       "Menú:\n"
	       "\tJ - Jugar.\n"
	       "\t(Los controles son W,S)");
	d = getchar();
	switch(d)
	{
		case 'J':
    break;

	}
}
