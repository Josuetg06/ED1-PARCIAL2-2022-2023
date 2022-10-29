#include <stdio.h>
#define MAX 10
 int buscarObjetivo(int arr[MAX],int numObj,int ini,int fin);
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

    pos=buscarObjetivo(arr,numObj,ini,fin);
    x = busquedaCiclica(arr,numObj,ini,fin);

    printf("--------Recursiva-------");
    printf("\n");
    if(pos!=-1){

      printf("Se encuentra en la posicion: %d",pos+1);
    }
    else{
        printf("no se encontro el valor");
    }
    printf("\n");

    printf("--------ciclica-------");

    printf("\n");

    if(x!=-1){

      printf("Se encuentra en la posicion: %d",x+1);
    }
    else{
        printf("no se encontro el valor");
    }

       return 0;
}
//BUSQUEDA BINARIA
int buscarObjetivo(int arr[MAX],int numObj,int ini,int fin)
 {
     int mitad;

     mitad= ini + (fin-ini)/2;



     if(arr[mitad]==numObj)
     {
         return mitad;

     }
     if(fin<ini){

        return -1;
      }

     if(arr[mitad]>numObj)
     {
         return buscarObjetivo(arr,numObj,ini,mitad-1);
     }
     else if(arr[mitad]<numObj)
     {
         return buscarObjetivo(arr,numObj,mitad+1,fin);
     }

 }
int busquedaCiclica(int arr[MAX],int numObj,int ini,int fin){

 while(ini<=fin){

    int mitad= ini + (fin-ini)/2;
    if(arr[mitad]==numObj){

        return mitad;

    }

    if(arr[mitad]>numObj){

         fin=mitad - 1;

     }
    else if(arr[mitad]<numObj)
     {
         ini=mitad + 1;
     }

 }


 return -1;

}
