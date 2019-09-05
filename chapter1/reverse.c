#include <stdio.h>

void reverse(char line[]);

int main(){
  int c;
  char line[100];
  int index=0;
  while((c=getchar())!=EOF&&c!='\n'){
    line[index++] = c;
  }
  line[index] = '\0';
  reverse(line);
  return 0;
}

void reverse(char line[]){
  int len=0;
  while(line[len]!='\0'){
    len++;
  }

  for(int i=0;i<len;i++){
    printf("%c",line[len-i-1]);
  }

}
