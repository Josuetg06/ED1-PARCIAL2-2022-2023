#include<stdio.h>
#define TAM 10

void seleccionSort(int arreglo[TAM]);
void printarray(int arreglo[TAM]);

int main(){

    int arreglo[TAM];

  for(int i=0;i<TAM;i++)
    {
        printf("Numero %d:",i+1);
        scanf("%d",&arreglo[i]);
    }


seleccionSort( arreglo);






}


void seleccionSort(int arreglo[TAM])
{
    int posMenor;
    int posAct;
    int pos;
    int aux;

    for (pos = 0; pos < TAM; ++pos)
    {
        posMenor = pos;

        for (posAct = pos; posAct < TAM; ++posAct)
        {
            if(arreglo[posAct] < arreglo[posMenor])
                posMenor = posAct;
        }

        //Intercambio

        aux = arreglo[pos];
        arreglo[pos] = arreglo[posMenor];
        arreglo[posMenor] = aux;

        printarray( arreglo);
    }
}
void printarray(int arreglo[TAM]){
 for(int i=0;i<TAM;i++)
    {
        printf("%d",arreglo[i]);
        printf("\t");
    }
    printf("\n");
    }
