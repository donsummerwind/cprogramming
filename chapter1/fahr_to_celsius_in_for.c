#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
  float fahr;
  for(fahr=UPPER;fahr>=LOWER;fahr-=STEP){
    printf("%3.0f\t%6.1f\n",fahr,5*(fahr-32)/9);
  }
  return 0;
}
