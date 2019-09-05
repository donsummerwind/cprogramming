#include <stdio.h>

int main(){
  char a[10] = "0123456789";
  for(int i=0;i<10;i++){
    printf("%c",*(a+i));
  }
  return 0;
}
