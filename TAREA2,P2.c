#include<stdio.h>
#define TAM 10

int busquedaSecCic(int arr[TAM],int num);
int busquedaSecRec(int arr[TAM],int num,int n);
int main(){

int arr[TAM],bSC,num,bSR,n=0;

printf("Ingrese el numero a buscar:");
scanf("%d",&num);
printf("Ingrese los valores del arreglo");
printf("\n");
for(int i=0; i<TAM; i++){

    printf("ingrese el valor de la posicion %d:",i+1);
    scanf("%d",&arr[i]);
    printf("\n");
}

bSC=busquedaSecCic(arr,num);


if(bSC!=-1){
    printf("El valor fue encontrado y se encuentra en la posicion %d",bSC+1);
}
else{
    printf("El valor no fue encontrado");
}
   printf("\n");
   printf("------RECURSIVA------");
   printf("\n");

bSR=busquedaSecRec(arr,num,n);
if(bSR!=-1){
    printf("El valor fue encontrado y se encuentra en la posicion %d",bSR+1);
}
else{
    printf("El valor no fue encontrado");
}

return 0;
}
int busquedaSecCic(int arr[TAM],int num){

  for(int i=0; i<TAM; i++){

  if(arr[i]==num){

        return i;
    }

   }
   return -1;
}
int busquedaSecRec(int arr[TAM],int num,int n){


  if(arr[n]==num)
 {
     return n;
 }
 if(n>=TAM)
 {
     return -1 ;
 }



 else{

   busquedaSecRec( arr, num,n+1);


}





}
