#include <stdio.h>
int main(void){
  /* 1から10までの整数を順番に足した結果　*/
  int i;
  int sum = 0;
  for (i=1; i<11; i++){
    printf("%d\n",sum+=i);
  }
  return 0;
}
