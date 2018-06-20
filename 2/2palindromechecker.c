#include <stdio.h>
#include <string.h> //strlen()に使う．                                         
int check_kaibun(char str[]);

int main(void){
  char str[] = "kayak";
  if(check_kaibun(str)){
    printf("%s is palindrome.\n", str);
  }else{
    printf("%s is NOT palindrome.\n", str);
  }
  return 0;
}

int check_kaibun(char str[]){
  int i, len=strlen(str)+1;
  int ans=1;
  if (len%2==1){
      for (i=0;i<=(len/2)-1;i++){
        if (str[i]!=str[len-i-2]){
            ans=0;break;
        }  
      }
  }else{
      for (i=0;i<=(len/2)-2;i++){
        if (str[i]!=str[len-i-2]){
            ans=0;break;
        }  
      }
  }
return ans;
}
