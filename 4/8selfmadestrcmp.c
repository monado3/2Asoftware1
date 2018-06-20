#include <stdio.h>

int strcmp1(char *s, char*t);

int main(){
    char *s="abc";
    char *t="abd";
    printf("%sと%sの比較結果は%dである。\n",s,t,strcmp1(s,t) );
    
    return 0;
}

int strcmp1(char *s, char *t){
    while (*s == *t){
        if ( *s=='\0' ){
            return 0;
        }
        s++;
        t++;
    }
    return *s - *t;
}
