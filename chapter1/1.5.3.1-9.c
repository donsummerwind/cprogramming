#include <stdio.h>

int main(){
  int c;
  int count = 0;
  while((c=getchar()) != EOF){
    if(c == ' '){
      count++;
    }else{
      if(count>0){
        //print multiple space in one
        printf("%c",' ');
        count = 0;
      }
      printf("%c",c);
    }
  }
  return 0;
}
