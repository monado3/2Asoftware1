#include <stdio.h>

int main(){
    int i;
    int j;
    int ct=1;
        
    while (1){
        printf("戻り値=%d\n" , scanf("%d %d",&i,&j ) );
        printf("%dループ目　%d %d\n",ct ,i ,j);
        ct++;
    }

    return 0;
}