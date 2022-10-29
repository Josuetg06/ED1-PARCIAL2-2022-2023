#include <stdio.h>
#define MAX 10

void insertionSort(int arr[MAX]);
void printarray(int arr[MAX]);
int main() {

    int arr[MAX];

    for (int i = 0; i < MAX; ++i) {
        printf("Dame el numero %i:", i + 1);
        scanf("%d", &arr[i]);
    }


    insertionSort(arr);


}
void insertionSort(int arr[MAX]){

    int aux;

    for (int pos = 1; pos < MAX; ++pos) {

        for (int actual = pos; actual > 0 ; --actual) {

            if(arr[actual]< arr[actual-1]){
                aux = arr[actual];
                arr[actual] = arr[actual-1];
                arr[actual-1] = aux;
            }
        }

        printarray( arr);

    }
}
 void printarray(int arr[MAX]){
 for(int i=0;i<MAX;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    printf("\n");


 }
