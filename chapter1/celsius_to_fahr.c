#include <stdio.h>
int main(){
  float fahr,celsius;
  float lower,step,upper;
  lower = 0;
  step = 20;
  upper = 300;
  printf("%s\t%s\n","celsius","fahr");
  celsius = lower;
  while(!(celsius>300)){
    fahr = (9.0/5.0)*celsius + 32;
    printf("%3.0f\t%6.1f\n",celsius,fahr);
    celsius += step
  }
  return 0;
}
