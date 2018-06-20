#include <stdio.h>

int strlen1(char *s);

int main(){
    char *s ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("文字列の長さは%dである。\n", strlen1(s) );
    
    return 0;
}

int strlen1(char *s){
    int counter=0;
    int i=0;
    while (*(s+i)!='\0'){
        counter++;
        i++;
    }
    
    return counter;
}
