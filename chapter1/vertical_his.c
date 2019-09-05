#include <stdio.h>

int main(){
  int c,wc=0,index=0;
  int statics[3];
  while((c=getchar())!=EOF){
    if(c!='\n'&&c!='\t'&&c!=' '){
      wc++;
    }else if(wc>0){
      statics[index++] = wc;
      wc = 0;
    }
  }
  int max=0;
  for(int i=0;i<3;i++){
    if(max<statics[i]){
      max = statics[i];
    }
  }

  int begin_draw_index[3];
  for(int i=0;i<3;i++){
    begin_draw_index[i] = max - statics[i];
  }

  for(int i=0;i<max;i++){
    for(int j=0;j<3;j++){
      if(begin_draw_index[j]>i){
        printf("%7s"," ");
      }else{
        printf("%7s","[]");
      }
    }
    printf("%s","\n");
  }

  printf("%s%s%s","index-0","index-1","index-2");

  return 0;
}
