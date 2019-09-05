#include <stdio.h>
#define MAX_LEN 50

int strindex(char[], char[]);
int main(){
  int c,t,index=0;
  char source[MAX_LEN];
  char target[MAX_LEN];
  printf("now input the source: \n");
  while((c=getchar())!='\n' && index<MAX_LEN){
    source[index++] = c;
  }
  source[index] =  '\0';

  printf("now input the target: \n");
  index=0;
  while((t=getchar())!='\n' && index<MAX_LEN){
    target[index++] = t;
  }
  target[index] = '\0';

  printf("the index of target in source is : %d \n",strindex(source,target));
}

int strindex(char source[], char target[]){
  int index=-1;
  for(int i=0;i<MAX_LEN && source[i]!='\0';i++){
      //匹配到第一个字符
      if(source[i]==target[0]){
        //继续往下匹配
        int all_matched = 1;
        for(int j=1;j<MAX_LEN && target[j]!='\0';j++){
          //从i+1开始,有任何一个字符不匹配就退出
          //同时要防止i+j数据下标越界
          if(source[i+j]=='\0' || source[i+j]!=target[j]){
            all_matched = 0;
            break;
          }
        }
        //全部匹配上,当前匹配到的下标为i
        if(all_matched>0){
          index =i;
        }
      }
    }
  return index;
}
