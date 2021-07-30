#include <stdio.h>

int main(){
    
  char user; scanf("%c", &user);    
  int a, b; 
  int verde[5][10] = {{1,2,3,4,5,6,7,8,9,10}, {2,3,4,5,6,7,8,9}, {3,4,5,6,7,8}, {4,5,6,7}, {5,6}};
  int pog[5] = {10,8,6,4,2}; // pog é a quantidade de elementos em cada vetor dentro da matriz verde
  double m[12][12], soma=0;

  for(a=0;a<12;a++){
    for(b=0;b<12;b++){
      scanf("%lf", &m[a][b]);
    }    
  }    
  for(a=0;a<5;a++){
    for(b=0;b<pog[a];b++){
      soma= soma + m[a][verde[a][b]];      
    }    
  }

  if(user == 'S'){printf("%.1lf\n", soma);}
  else{printf("%.1lf\n", soma/30.0);}

  return 0;
}
