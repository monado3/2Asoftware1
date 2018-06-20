#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
    char matrix[10][11];
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            matrix[i][j]='-';
        }
    }
    
    for (int i=0;i<10;i++){
        matrix[i][10]='\0';
    }
    
    int x,y;
    char c;
    printf("「x座標 y座標 文字」のようにスペース区切りで入力してください\n");
    while (1){
        fflush(stdin);
        if (scanf("%d %d %c",&x,&y,&c) != 3){
            printf("入力書式が正常でありません\n");
        }else if (x>9){
            break;
        }else{
            matrix[y][x]=c;
            system("clear");
            for (int i=0;i<10;i++){
                printf("%s\n",matrix[i]);
            }
        }
        
    } 
    
    return 0;
}
