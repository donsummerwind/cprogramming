#include <stdio.h>
#define LEN_LIMIT 5
#define IN 1
#define OUT 0

void printHorizontalHis();
void printVerticalHis();

int main(){
  printHorizontalHis();
  printVerticalHis();
}

void printHorizontalHis(){
  int c,state=OUT,wc=0,statistics[LEN_LIMIT],max_len=0;
  //当输入非EOF且单词数还未达到上限
  while((c=getchar())!=EOF && wc<LEN_LIMIT){
    //当输入非空
    if(c!=' ' && c!='\t' && c!='\n'){
      //首次进入输入状态
      if(state==OUT){
        state=IN;
        //初始化字符统计数
        statistics[wc]=0;
      }
      //当前单词字符数统计+1
      statistics[wc]++;
    }else if(state==IN){
      //当输入为空
      //首次从单词输入状态跳出
      state=OUT;
      if(max_len<statistics[wc]){
        max_len = statistics[wc];
      }
      wc++;
    }
  }
  printf("There are %d words, the statstics in horizontal are: \n",wc);
  //打印水平直方图
  for(int i=0;i<wc;i++){
    for(int j=0;j<statistics[i];j++){
      putchar('*');
    }
    putchar('\n');
  }

  printf("There are %d words, the statistics in vertical are: \n",wc);

  //打印垂直直方图
  for(int i=0;i<max_len;i++){
    for(int j=0;j<wc;j++){
      //当第j列的长度达到maxlen-i时,打印字符*
      if(statistics[j]>=(max_len-i)){
        putchar('*');
      }else{
        //否则打印一个空位置
        putchar(' ');
      }
    }
    putchar('\n');
  }
}
