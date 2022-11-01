#include <stdio.h>
#define N 5
void bubbleSort(int arr[N]);
void printarray(int arr[N]);
int swap(int *val1, int *val2,int x);
int main()
{
     int arr[N];

     for(int i=0;i<N;i++)
    {
        printf("Numero %d:",i+1);
        scanf("%d",&arr[i]);

    }


    bubbleSort(arr);


return 0;

}

 void bubbleSort(int arr[N]){
    int x;
    for(int i=0; i<N-1; i++){
        x=0;
        printarray(arr);
        for(int actual=0; actual<N-1; actual ++)

           if(arr[actual]<arr[actual+1]){

               x=swap(&arr[actual],&arr[actual+1],x);
           }
        if(x==0){

            break;
        }
    }



 }
 void printarray(int arr[N]){
 for(int i=0;i<N;i++)
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
