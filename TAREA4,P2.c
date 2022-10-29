#include <stdio.h>
#define SIZE 10
void bubbleSort(int arr[SIZE]);
void printarray(int arr[SIZE]);
int swap(int *val1, int *val2,int x);
int main()
{
     int arr[SIZE];

     for(int i=0;i<SIZE;i++)
    {
        printf("Numero %d:",i+1);
        scanf("%d",&arr[i]);
    }


    bubbleSort(arr);


return 0;

}

 void bubbleSort(int arr[SIZE]){
    int x;
    for(int i=0; i<SIZE-1; i++){
        x=0;
        printarray(arr);
        for(int actual=0; actual<SIZE-1; actual ++)

           if(arr[actual]>arr[actual+1]){

               x=swap(&arr[actual],&arr[actual+1],x);
           }
        if(x==0){

            break;
        }
    }



 }
 void printarray(int arr[SIZE]){
 for(int i=0;i<SIZE;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    printf("\n");


 }

 int swap(int *val1, int *val2,int x){
       int aux;

      aux=*val1;
      *val1=*val2;
      *val2=aux;
      x=1;

 }
