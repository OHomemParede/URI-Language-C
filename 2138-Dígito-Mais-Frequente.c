#include <stdio.h>

int most_often(int *v);
void reset(int *v);


void reset(int *v){
  int i;
  for(i=0;i<10;i++){
    v[i] = 0;
  }
}


int most_often(int *v){
  int i, m = 0, p = 0;
  for(i=0;i<10;i++){
    if(v[i] >= m){
      m = v[i];
      p = i;
    }
  }
  return p;
}


int main(){
  char c;
  int v[10], i;
  reset(v);

  while((c=getchar())!=EOF){
    if(c>='0' && c<='9'){
      v[((int)c)-'0']++;
    }

    else{ // ao entrar nesse else significa que houve um \n quebra de linha.
      printf("%d\n", most_often(v));
      reset(v);
    }
  }
  return 0;
}
