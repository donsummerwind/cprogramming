#include <stdio.h>

int main(){
  int c;
  int count_space=0,count_tab=0,count_newline=0;
  while((c=getchar())!=EOF){
    if(c == '\t'){
      count_tab++;
    }else if(c == '\n'){
      count_newline++;
    }else if(c == ' '){
      count_space++;
    }
  }
  printf("count of space -> %d\n",count_space);
  printf("count of tab -> %d\n",count_tab);
  printf("count of newline -> %d\n",count_newline);
  return 0;
}
