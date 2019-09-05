#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
  int c,state=OUT;
  while((c=getchar()) != EOF){
    if((c==' ' || c=='\t' || c== '\n') && state == IN){
      state = OUT;
      printf("%s","\n");
    }else{
      state = IN;
      printf("%c",c);
    }
  }
  return 0;
}
