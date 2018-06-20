#include <stdio.h>
int main(void)
{
  printf("int \t%d\n",   (int) sizeof(int));
  printf("long \t%d\n",  (int) sizeof(long));
  printf("short \t%d\n", (int) sizeof(short));
  printf("long int \t%d\n", (int) sizeof(long int));
  printf("float \t%d\n", (int) sizeof(float));
  printf("double \t%d\n",(int) sizeof(double));
  printf("char \t%d\n",  (int) sizeof(char));
  return 0;
}
