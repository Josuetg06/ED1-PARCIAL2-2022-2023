#include <stdio.h>
#define MAX 4

int busquedaCiclica(int arr[MAX],int numObj,int ini,int fin);

int main()
{
    int arr[MAX];
    int numObj;
    int ini=0;
    int fin=MAX-1;
    int pos,x;



    for(int i=0;i<MAX;i++)
    {
        printf("Numero %d:",i+1);
        scanf("%d",&arr[i]);
    }


    for (int i = 0; i < MAX; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Dame el numero objetivo:");
    scanf("%d",&numObj);

     x = busquedaCiclica(arr,numObj,ini,fin);
     printf("La posicion en el que se encuentra o donde deberia insertarse es;%d",x+1);


     return 0;
}
int busquedaCiclica(int arr[MAX],int numObj,int ini,int fin){

     int mitad;

     while (ini <= fin ) {
        mitad = ini + (fin - ini) / 2;

        if (arr[mitad] == numObj)
            return mitad;
        else if (arr[mitad] > numObj)
            fin = mitad - 1;
        else
            ini = mitad + 1;
    }

    return ini;

}
