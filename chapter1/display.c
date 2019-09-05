#include <stdio.h>
#include <stdlib.h>


int main(){
  int c;
  while((c=getch())!=EOF){
    if(c == '\t'){
      printf("%s","\\t");
    }if(c == '\\'){
      printf("%s","\\");
    }if(c == '\b'){
      printf("%s","\\b");
    }else{
      printf("%c",c);
    }
  }
  return 0;
}
