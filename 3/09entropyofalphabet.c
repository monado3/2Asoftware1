#include <stdio.h> 
#include <math.h>
#define NALPHA 26 //アルファベットの種類

int main(){ 
    int count[NALPHA]={}; 
    int c, i, sum=0;
    double h=0.0; 
    
    while( ( c = getchar() ) != EOF ) { 
        if( 0<= (c-'a') && (c-'a')<=25 ) { 
            count[c-'a']++; // 該当するアルファベットのカウント結果を+1する。
        }
    }/*count[]がこれにて完成*/
    
    /*アルファベットの総出現回数を求める*/
    for (i=0 ;i < NALPHA ;i++){
        sum+=count[i];
    }
    
    /*エントロピーを求める*/
    for (i=0 ;i < NALPHA ;i++){
        h += ((double)count[i]/(double)sum)*(-1)*log2(((double)count[i]/(double)sum));
    }
    
    /*表示*/
    printf("entropy = %e\n",h);
    
    return 0;
}
