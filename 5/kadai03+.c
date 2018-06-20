#include <stdio.h>
#include <stdlib.h>

int main(void){
    char matrix[10][11];
    char temp[101];
    FILE *fp;
    if ( (fp=fopen("data.txt","r")) == NULL){
        return -1;
    }
    fgets(temp, 101, fp);
    int k=0;
    for (int i=0;i<10;i++){
        for (int j=0;j<11;j++){
            if (j!=10){
                matrix[i][j]=temp[k];
                k++;
            }else{
                matrix[i][j]='\0';
            }
        }
    }
    for (int i=0;i<10;i++){
        printf("%s\n",matrix[i]);
    }
    
    return 0;
}
