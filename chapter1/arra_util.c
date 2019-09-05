#include <stdio.h>

int c_getline(char line[],int factor,int init_size);
int copyline(char from[], char to[]);

int main(){
  int factor=2,len,init_size=10;
  char line[init_size];
  while((len=c_getline(line,factor,init_size))>0){
    for(int i=0;i<len;i++){
      printf("%c",line[i]);
    }
  }
  return 0;
}

int c_getline(char line[],int factor,int init_size){
  int c,current_size=init_size,len=0;
  while((c=getchar())!='\n'){
      if(len<current_size){
        line[len++]=c;
      }else{
        current_size=current_size*factor;
        char newline_arr[current_size];
        for(int i=0;i<current_size;i++){
          newline_arr[i] = line[i];
        }
        line = newline_arr;
      }
  }
  for(int i=0;i<current_size;i++){
    printf("%c",line[i]);
  }
  return len;
}
