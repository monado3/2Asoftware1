#include <stdio.h>

// func3: S(N, m)を最大にするようなmを返す関数
// func3は返り値がintであることに注意せよ。
int func3(int N)
{
    int n,max=0,ans;
    char charset[]="0123456789";
   
    for (n=2;n<=10;n++){
        int temp=0;
        int a=N;
        int b=100;
        while (b!=0){
            b=a/n;
            temp+=a%n;
            a=b;
        }
        if (temp>max){
            max=temp;
            ans=n;
        }   
    }
    return ans;
}

/* ここから下を編集しないこと */
#define INPUT_NUM 3
int inputs[INPUT_NUM] = {35, 732043, 991326};

int main(void)
{
    int i;
    for (i = 0; i < INPUT_NUM; i++) {
        /* func3はS(N, m)を最大にするようなmを返すこと。 */
        printf("%d\n", func3(inputs[i]));
    }
    return 0;
}