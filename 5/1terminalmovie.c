#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
    char matrix[10][11];
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            if (i==j){
                matrix[i][j]='*';
            }else{
                matrix[i][j]=' ';
            }
        }
    }
    for (int i=0;i<10;i++){
        matrix[i][10]='\0';
    }
    for (int i=1;i<=10;i++){
        int j=0;
        while (j!=i){
            printf("%s\n",matrix[j]);
            j++;
        }
        sleep(1);
        system("clear");
    }
    
    return 0;
}
