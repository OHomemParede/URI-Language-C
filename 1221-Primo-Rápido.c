#include <stdio.h>
#include <math.h>

int isprime(unsigned long long int n);


int isprime(unsigned long long int n){
  unsigned int cont;
  
  if(n<=1)
    return 0;

  if(n==2) 
    return 1;
  
  if(!(n&1)) 
    return 0;
  
  for(cont=3; cont<=pow(n,0.5); cont=cont+2){
    if(n%cont==0)
      return 0;
  }
  return 1;
}

int main() {
  int a, cont;
  unsigned long long int n;
  scanf("%d", &a); // a → quantidade de entrada
  for(cont=0;cont<a;cont++){
    scanf("%llu", &n);
    
    if(isprime(n))
      printf("Prime\n");
  
    else
      printf("Not Prime\n");
  }
}
