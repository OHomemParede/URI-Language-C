#include <stdio.h>
#include <math.h>

int isprime(int n);


int isprime(int n){
  unsigned int cont;
  
  if(n==2) 
    return 1;
  
  if(n%2==0) 
    return 0;
  
  for(cont=3; cont<=pow(n,0.5); cont=cont+2){
    if(n%cont==0)
      return 0;
  }
  return 1;
}

int main() {
  int n, a, cont;
  scanf("%d", &a); // a → quantidade de entrada
  for(cont=0;cont<a;cont++){
    scanf("%d", &n);
    
    if(isprime(n))
      printf("Prime\n");
  
    else
      printf(" Not Prime\n");
  }
}
