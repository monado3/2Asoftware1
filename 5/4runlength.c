#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    FILE *ans;
    char str[101];
    char temp[3];
    if ((fp = fopen("data.txt","r")) == NULL){
        return -1;
    }
    if ((ans = fopen("compeddata.txt","w")) == NULL){
        return -1;
    }
    
    fgets(str,101,fp);
    fclose(fp);
    
    int i=1;
    int j=1;
    while(str[i]!= '\0'){
        if (str[i-1]==str[i]){
            j++;
            i++;
        }else{
	        fputc(str[i-1],ans);
            if (j<10){
                fputc(j+'0',ans);
            }else{
                snprintf(temp,3,"%d",j);
                fputs(temp,ans);
            }
            j=1;
            i++;
        }
    }
    fputc(str[i-1],ans);
    if (j<10){
        fputc(j+'0',ans);
    }else{
        snprintf(temp,3,"%d",j);
        fputs(temp,ans);
    }
    fputc('\0',ans);
    
    fclose(ans);
    
    return 0;
}
