#include <stdio.h>

int main(){
  int c,wc=0,index=0;
  int statics[3];
  while((c=getchar())!=EOF){
    if(c!='\t'&&c!='\n'&&c!=' '){
      wc++;
    }else if(wc>0){
      statics[index++] = wc;
      wc=0;
    }
  }

  for(int i=0;i<3;i++){
    printf("%s%d%s","index-",i,": ");
    for(int j=0;j<statics[i];j++){
      printf("%s","[]");
    }
    printf("%s","\n");
  }
  return 0;
}
