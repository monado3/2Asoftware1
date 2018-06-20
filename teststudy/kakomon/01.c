#include <stdio.h>

int main(){
    int i,j;
    for (i=2;i<1001;i++){
        int flag=1;
        for (j=2;j<i-1;j++){
            if (i%j == 0){
                flag=0;
                break;
            }
            
        }
        if (flag==1){
            printf("%d\n",i);
        }
    }

    return 0;
}