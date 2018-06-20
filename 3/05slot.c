#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define K 5 // スロットマシンの数
#define N 1000000 // コインの数．採点時には1,000,000などの大きな数にする．
int bet(int k); //変更不可

int main() { //自由に変更して良い
    srand((unsigned) time(NULL));
    int sample,i,tem,samplemaxindex,samplemax=0,trymax=((N/K)/100),credit = N, sum=0;
    int samplelist[K]={};
    
    if (trymax<10){
        trymax=10;
    }
    
    // N/100回(最低でも10回）程度試行して期待値を調査
    for (sample=0;sample <= K-1; sample++){
        for (i = 1 ; i <= trymax ; i++){
            tem = bet(sample);
            samplelist[sample] += tem;
            sum += tem;
            credit--;
        }
    }
    
    //どの台の期待値が高いか判定
    for (sample=0;sample <= K-1; sample++){
        if (samplemax < samplelist[sample]){
            samplemax=samplelist[sample];
            samplemaxindex=sample;
        }
    }
    
    //一番期待値が高い台に残りのクレジットを全て賭ける
    while (credit-- >0){
        sum+=bet(samplemaxindex);
    }
    printf("sum=%d , sum/N=%f\n", sum, (double)sum/N);
    
    /*デバック
    for (sample=0;sample<=K-1;sample++){
        printf("%d\n",samplelist[sample]);
    }
    printf("max=%d index=%d\n",samplemax,samplemaxindex);
    */
    return 0;
}

// 以下の関数は変更不可
int bet(int k){ // 入力：スロットマシンの番号　出力：当選金
    // これは例であり，採点時には当選金と確率が変化する
    switch(k){
        case 0:
            if(rand() % 2 == 0){ // 2/2
                return 2;
            }else{
                return 0;
            }
            break;
        case 1:
            if(rand() % 7 == 0){ // 5/7
                return 5;
            }else{
                return 0;
            }
            break;
        case 2:
            if(rand() % 8 == 0){ // 10/8
                return 10;
            }else{
                return 0;
            }
            break;
        case 3:
            if(rand() % 40 == 0){ // 50/45
                return 50;
            }else{
                return 0;
            }
            break;
        case 4:
            if(rand() % 200 == 0){  // 100/200
                return 100;
            }else{
                return 0;
            }
            break;
        default:
            return 0;
    }
}
