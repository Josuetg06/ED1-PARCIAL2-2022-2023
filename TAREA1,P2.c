#include<stdio.h>

int main(){

int fibonacci(int n);

int n,fib;

printf("Escribe un numero");
scanf("%d",&n);

fib=fibonacci(n);

printf("El fibonacci de  %d es : %d ",n, fib);


return 0;
}

int fibonacci(int n)
{
  if(n<2)
   {
       return n ;
   }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
