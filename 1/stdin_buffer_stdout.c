#include <stdio.h>
/*入力を出力に模写*/
int main(){
  int c;
  c = getchar();
  while (c!= EOF){
    putchar(c);
    c=getchar();
  }
  return 0;
}
