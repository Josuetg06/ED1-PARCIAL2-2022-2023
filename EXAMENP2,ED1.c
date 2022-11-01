#include <stdio.h>
#define MAX 2

struct cancion {
  int codigo;
  char nombreCancion[100];
  char nombreAlbum[100];
  int numInterpretes;
  char nomInterpretes[3][100];
  int reproducciones;

};
void capturarDato(struct cancion *d);
int masReproducciones( struct cancion d[MAX]);


int main (){

struct cancion datosCanciones[MAX];
int x;
for(int i=0; i<MAX; i++){

  capturarDato(&datosCanciones[i]);
  printf("\n");
}

masReproducciones(datosCanciones);




return 0;
}
void capturarDato(struct cancion *d){

 printf("ingresa el codigo de la cancion: ");
 scanf("%d",&d->codigo);


 printf("ingresa el nombre de la cancion: ");
 scanf("%s",d->nombreCancion);
 fflush( stdin );

 printf("ingresa el nombre del album: ");
 scanf("%s",d->nombreAlbum);
 fflush( stdin );

 printf("ingresa el numero de interpretes: ");
 scanf("%d",&d->numInterpretes);

 for(int interprete=0;  interprete<3 ; interprete ++){

    printf("nombre del interprete #%d: ",interprete+1);
    scanf("%s",d->nomInterpretes[interprete]);
    fflush( stdin );

 }

 printf("ingresa el numero de reproducciones: ");
 scanf("%d",&d->reproducciones);

}
int masReproducciones( struct cancion d[MAX]){
   int mayor=0;
   int i;
 for( i=0; i<MAX; i++){

    if(d[i].reproducciones>mayor){

        mayor=d[i].reproducciones;
    }


 }

  printf("La cancion con mas reproducciones es %s",d[i].nombreCancion);
}


