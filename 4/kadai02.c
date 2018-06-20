#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p;
  p = (int *) malloc(sizeof(int) * 1);
  *p = 100;
  printf("*p = %d\n", *p);
  printf("p = %p\n", p);
  printf("&p = %p\n", &p);

  printf("*pはポインタpが示すアドレスの変数の中身である。\npはポインタpが示すアドレスである。つまりこの場合100という整数が格納されているメモリのアドレスを示している。\n&pはポインタpという変数自体が格納されているメモリのアドレスを示している。\n");

  return 0;
}
