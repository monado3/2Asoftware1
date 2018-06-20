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

// func2: 自然数Nをn進法に変換して表示する関数
void func2(int N, int n)
{
    char strreverse[200];
    char charset[]="0123456789abcdef";
    int a=N;
    int b=100;
    int i=0;
    while (b!=0){
        b=a/n;
        strreverse[i]=charset[(a%n)-0];
        a=b;
        i++;
    }
    reverse(strreverse);
    printf("%s\n",strreverse);
    
}

/* ここから下を編集しないこと */
#define INPUT_NUM 7
int inputs[INPUT_NUM] = {91328, 35516, 619820, 317138, 981536, 568102, 1048575};
int bases[INPUT_NUM] = {3, 7, 9, 11, 12, 15, 16};

int main(void)
{
    int i;
    for (i = 0; i < INPUT_NUM; i++) {
        /* func2の中で答えの表示を行うこと */
        func2(inputs[i], bases[i]);
    }
    return 0;
}