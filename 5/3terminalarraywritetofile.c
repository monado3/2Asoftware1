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
    
    int x,y,k;
    char c;
    FILE *fp;
    char str[110];
    printf("「x座標 y座標 文字」のようにスペース区切りで入力してください\n");
    while (1){
        fflush(stdin);
        if (scanf("%d %d %c",&x,&y,&c) != 3){
            printf("入力書式が正常でありません\n");
        }else if (x>9 || y>9){
            break;
        }else{
            if ((fp = fopen("data.txt", "w")) == NULL) {
                return -1;
            }
            matrix[y][x]=c;
            k=0;
            for (int i=0;i<10;i++){
                for (int j=0;j<10;j++){
                    str[k]=matrix[i][j];
                    k++;
                }
            }
            str[k]='\0';
            fputs(str,fp);
            fclose(fp);
	    }
    }
    
    return 0;
}
