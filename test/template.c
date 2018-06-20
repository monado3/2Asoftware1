//ノーマル
#include <stdio.h>

int main(){
    
    return 0;
}


//コマンドライン
#include <stdio.h>

int main(int argc, char *argv[]){
    
    if (argc != 2) {
        printf("コマンドのあとに一つファイルを指定してください\n");
    }
    
    return 0;
}

//標準入力からスペース区切りで分解
#include <string.h>

char s1[]="fg hj fdgd fs gd f ks hgf";
char s2[] = " -.";
char *tok[100]
tok[0] = strtok( s1, s2 );
int i=0;
while( tok[i] != NULL ){
        i++;
    tok[i] = strtok( NULL, s2 );
}

//ファイルオープン
FILE *fp;

if ( ( fp = fopen(argv[1], "r") ) == NULL) {
    printf("読み込みに失敗しました。\n");
    return 1;
}

fclose(fp);

/* nが素数なら1を返す。素数でないなら0を返す。*/
int is_prime(int n){
    
    int ans=1;
    int j;
    for (j=2;j<=(n/2);j++){
        if (n%j == 0){
            ans=0;
            break;
        }
    }
return ans;
}

//最大公約数を返す
int gcd(int a,int b){
    int t;
    while (b !=0){
        t = b;
        b = a % b;
        a = t;
    }
return a;
}

//標準入力から一文字とってくる
int i;
int dummy;
while ( (i = getchar() ) != EOF ){
        dummy = getchar();
}

//ターミナルのクリア
<stdlib.h>
system("clear");
．
//1秒間停止
#include <unistd.h>
sleep(1);