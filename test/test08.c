a,bを求めるところまで書こうとしましたが時間が足りずきちんと動作するようにできませんでした。

#include <stdio.h>
#include <string.h>

int main(){
    char angou[]="duuz juehrkrc";
    char hint[]="learning";
    
    char s2[] = " ";
    char *tok[100];
    tok[0] = strtok( angou, s2 );
    int i=0;
    while( tok[i] != NULL ){
        i++;
        tok[i] = strtok( NULL, s2 );
    }
    int wordnum=i;
    
    int alist[]={1,3,5,7,9,11,13,15,17,19,21,23,25};
    int numangou[strlen(hint)];
    int j,a0,b0;
    char check[50];
    char temp[50];
    for (i=0;i<wordnum;i++){
        if (strlen(hint)!=strlen(tok[i])){
            continue;
        }
        int flag=0;
        for (j=0;j<strlen(hint);j++){
            numangou[j]=tok[i][j]-'a';
        }
        printf("%d",numangou[1]);
        for (int a1=0;a1<13;a1++){
            if (flag==1){
                break;
            }
            for (int b1=0;b1<=25;b1++){
                for (int k=0;k<strlen(hint);k++){
                    temp[k]=((numangou[k]*alist[a1]+b1)%26) - 'a';
                }
                if (strcmp(hint,temp)==0){
                    a0=alist[a1];
                    b0=b1;
                    flag=1;
                    break;
                }
            }
        }
    }
    
    printf("%d %d",a0,b0);
    
    
}

