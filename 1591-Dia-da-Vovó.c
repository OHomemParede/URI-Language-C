#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countword(char **matrix, char *word, int l, int c);


int countword(char **matrix, char *word, int l, int c){
  int x, y; // contadores para o for(...)
  int query, limit, index, encontradas=0;
  for(y=0;y<l;y++){
    for(x=0;x<c;x++){
      
      
      //=============== Procurando horizontalmente ===============
      limit = x+strlen(word);
      if(limit > c)
        limit = c;
      
      index=0; // em todo inicio de loop index recebe o valor de 0, indicando uma nova procura pela palavra *word
      
      for(query=x; query<limit; query++){
        if(matrix[y][query] != word[index]){
          break;
        }
        else
          index++;
      }
      if(index == strlen(word))
        encontradas++;
     
      
      //=============== Procurando verticalmente =============== 
      limit = y+strlen(word);
      if(limit > l)
        limit = l;

      index=0; // em todo inicio de loop index recebe o valor de 0, indicando uma nova procura pela palavra *word
      for(query=y; query<limit; query++){
        if(matrix[query][x] != word[index]){
          break;
        }
        else
          index++;
      }
      if(index == strlen(word))
        encontradas++;
    }
  }
  
  //============================================================
  if(strlen(word)==1) // se o tamanho da palavra for 1, entao a quantidade de palavras encontradas (verticalmente + horizontalmente) será duas vezes maior do que a real.
    return encontradas/2;
  else
    return encontradas;
}


int main(){
  int i, x, y; //contadores usados no for(...)
  
  int t, l, c, p; //   t   (T <= 100) indicando o número de casos de teste.
                  //   l   (1 ≤ L ≤ 50) indicando o número de linhas.
                  //   c   (1 ≤ C ≤ 50) indicando o número de colunas.
                  //   p   (1 ≤ P ≤ 50) indicando quantas palavras você deve procurar
  
  char **matrix, word[50]={0};
  scanf("%d ",&t);
  while(t--){
    scanf("%d %d ",&l, &c);

    matrix = malloc(l * sizeof(char*));
    for(i=0;i<l;i++) matrix[i] = malloc(c * sizeof(char));

    for(y=0;y<l;y++){
      scanf("%s", matrix[y]);
    }

    scanf("%d ", &p);
    while(p--){
      scanf("%s", word);
      printf("%d\n", countword(matrix, word, l, c));
    }
  }
  return 0;
}
