#include <stdio.h>
#include <stdlib.h>

void strcpy1(char *s, char*t);

int main(){
    char *t="abcdefg";
    char *s;
    s = (char *) malloc (sizeof(*t));
    strcpy1(s,t);
    printf("tのコピーは「%s」である。\n", s);
    
    return 0;
}

void strcpy1(char *s, char*t){
    int i=0;
    char temp;
    do {
        temp=*(t+i);
        *(s+i)=temp;
        i++;
    } while( temp != '\0');
}
