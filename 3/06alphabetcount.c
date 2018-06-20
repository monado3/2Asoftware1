#include <stdio.h> 
#define NALPHA 26 //アルファベットの種類

int main(){ 
    int count[NALPHA]={}; 
    int c, i; 
    
    while( ( c = getchar() ) != EOF ) { 
        if( 0<= (c-'a') && (c-'a')<=25 ) { 
            count[c-'a']++; // 該当するアルファベットのカウント結果を+1する。
        } 
    }
    for( i = 0 ; i < NALPHA ; i++ ) { 
        printf( "%c : %d\n", 'a'+i, count[i] );  
    }
    return 0;
}
