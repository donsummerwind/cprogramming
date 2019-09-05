#include <stdio.h>
#define IN 1
#define OUT 0
/*
 * test case:
 * 1. no input
 * 2. single word
 * 3. single word,single line
 * 4. multiple words,single line
 * 5. multiple words,multiple lines
 */
int main(){
  int c,wc=0,lc=0,cc=0;
  int state=OUT;
  while((c=getchar())!=EOF){
    cc++;
    if(c=='\n')
      lc++;
    //当处于OUT状态,遇到第一个非空字符时,状态置为IN,单词数+1
    if(c==' ' || c=='\t' || c=='\n'){
      state=OUT;
    }else if(state==OUT){
      state = IN;
      wc++;
    }
  }
  printf("word count -> [%d], line count ->[%d], char count -> [%d]\n",
        wc,lc,cc);
  return 0;
}
