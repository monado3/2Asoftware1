#include <stdio.h>   // printf
#include <ctype.h>   // 文字一文字を受け取り大文字にするtoupper()関数を利用する
#include <string.h>  // strlen

#define STR_LEN 20

char* str_toupper(char* src)
{
    char dst[STR_LEN];
    for (int i = 0; i <= (int)strlen(src); ++i) {
        dst[i] = toupper(src[i]);
    }

    return dst;
}

int main(void)
{
    char src[STR_LEN] = "Hello World";
    char* dst = str_toupper(src);
    printf("original: %s, to_upper: %s\n", src, dst);
    return 0;
}
