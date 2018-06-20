#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int gcpmachine(void);

int main(){
    char command;
    printf("コマンド：g=グー ,c=チョキ ,p=パー , q=ゲーム終了\n");
    while (1){
        command=tolower(getchar());
        if (command == 'q'){
            printf("ゲーム終了！！！\n");break;
        }else if (command == '\n'){
            continue;
        }else if ((command !='g') && (command !='c') && (command !='p')){
            printf("そのコマンドは有効ではありません。g,c,pのいずれかを入力してください\n");
        }else{
            if (gcpmachine()==1){
                if (command=='g'){
                    printf("あなたはグーを出しました。私はチョキを出しました。あなたの勝ち！\n");
                }else if (command=='c'){
                    printf("あなたはチョキを出しました。私はパーを出しました。あなたの勝ち！\n");
                }else{
                    printf("あなたはパーを出しました。私はグーを出しました。あなたの勝ち！\n");
                }
            }else{
                if (command=='g'){
                    printf("あなたはグーを出しました。私はパーを出しました。あなたの負け！\n");
                }else if (command=='c'){
                    printf("あなたはチョキを出しました。私はグーを出しました。あなたの負け！\n");
                }else{
                    printf("あなたはパーを出しました。私はチョキを出しました。あなたの負け！\n");
                }
                
            }
        }
    }
    return 0;
}

int gcpmachine(void){
    srand(time(NULL));
    int win_or_lose=(rand() % 10) +1;
    if (win_or_lose>=3){ /*ここで勝率を調整*/
        return 1;
    }else{
        return 0;
    }
}
