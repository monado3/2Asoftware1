#include <stdio.h>
#include <math.h>
#define NALPHA 26 

int main() {
    int count[NALPHA][NALPHA]; 
    double prob[NALPHA][NALPHA]; 
    int c, i, j, sum;
    int first, second;
    double h;
    
    for( i = 0 ; i < NALPHA ; i++ ) { 
        for( j = 0 ; j < NALPHA ; j++ ) { 
            count[i][j] = 0; 
        } 
    } 

    second = ' '; 
    while( ( c = getchar() ) != EOF ) { 
        first = second;
        second = c; 
        if( (0 <= (first-'a')) && ((first-'a')<=25) && (0 <= (second-'a')) && ((second-'a')<=25) ) { 
            count[first-'a'][second-'a']++; 
        } 
    }//count[][]の作成が完了
    
    // 確率を計算するループ
    for( i = 0 ; i < NALPHA ; i++ ) { 
        sum = 0; 
        for( j = 0 ; j < NALPHA ; j++ ) {
            sum+=count[i][j];
        } 
        for( j = 0 ; j < NALPHA ; j++ ) { 
          prob[i][j] = (double)count[i][j]/(double)sum; 
        } 
    } 
  
    //表示
    for ( i = 0 ; i < NALPHA ; i++ ) {
        h = 0.0;
        for( j = 0 ; j < NALPHA ; j++ ) { 
            if(  count[i][j] == 0 ) { 
                continue;
            }else{
                h += prob[i][j]*(-1)*log2(prob[i][j]);
            }
        }
        printf( "[%c]: ent = %e\n", i+'a', h );
    } 

    return 0;
}
