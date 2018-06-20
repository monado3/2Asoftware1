#include <stdio.h>

int nabeatsu(int);

int main(){
    int i;
    for (i=1;i<1000;i++){
        if (nabeatsu(i)==1){
            printf("%d!!!\n",i);
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}

int nabeatsu(int n){
    if ( n%3==0 || n%10==3 || n%100 - n%10 ==30 || n%1000 - n%100 == 300){
        return 1;
    }else{
        return 0;
    }
}
