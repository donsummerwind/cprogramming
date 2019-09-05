#include <stdio.h>

/**
 *  This is a program for fahr convert to celsius
 */
int main(){
  float fahr,celsius;
  float lower,step,upper;
  lower = 0;
  step = 20;;
  upper = 300;
  fahr = lower;
  printf("%4s\t%s\n","fahr","celsius");
  while(!(fahr>upper)){
    celsius = (fahr-32.0)*5.0/9.0;
    printf("%3.0f\t%6.1f\n",fahr,celsius);
    fahr = fahr + step;
  }
  return 0;
}
