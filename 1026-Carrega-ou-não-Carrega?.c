#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reset(char *str);
unsigned int strui(char *str, int lenght);
int len(char *str);
int MAX = 10;
//========= reset =========
void reset(char *str){
  int a;
  for(a=0;a<MAX;a++)
    str[a] = '\0';
}


//========= strui =========
unsigned int strui(char *str, int lenght){
  unsigned int result = 0;
  int a, size;
  lenght = lenght -1;
  size = lenght;
  for(a=0;a<=lenght;a++){
    result = result + (((int) str[a]-'0') * pow(10, size));
    size--;
  }

  return result;
}


//========= len =========
int len(char *str){
  int a;
  for(a=0;a<MAX;a++){
    if(str[a] == '\n' || str[a] == ' ')
      break;
  }
  return a;
}


//========= main =========
int main(){
  char c, str[MAX];
  short int x, i;
  unsigned int num[2];
  reset(str);

  x = 0;
  i = 0;
  while((c=getchar())!=EOF){
    str[x] = c;
    x++;
    
    if(c==' ' || c=='\n'){
      num[i] = strui(str, len(str));
      reset(str);
      x = 0;
      i++;
    }

    if(c=='\n'){
    i = 0;
    x = 0;
    reset(str);
    printf("%u\n", num[0] ^ num[1]);
    }
  }

  return 0; 
}
