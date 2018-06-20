#include <stdio.h>
#include <string.h>

void reverse(char *s){
    int len = strlen(s);
    char temp[len+1];
    strcpy(temp,s);
    for (int i=0;i<len;i++){
        *(s+i) = *(temp+len-i-1);
    }
}
// func1: 自然数Nを2進法に変換して表示する関数
void func1(int N)
{
    char strreverse[100];
    int a=N;
    int b=100;
    int i=0;
    
    while ( b!=0){
        b=a/2;
        strreverse[i]=a%2+'0';
        a=b;
        i++;
    }
    
    reverse(strreverse);
    
    printf("%s\n",strreverse);
    
}

/* ここから下を編集しないこと */
#define INPUT_NUM 5
int inputs[INPUT_NUM] = {15, 128, 9105, 516219, 368274};

int main(void)
{
    int i;
    for (i = 0; i < INPUT_NUM; i++) {
        /* func1の中で答えの表示を行うこと */
        func1(inputs[i]);
    }
    return 0;
}
