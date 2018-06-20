#include <stdio.h>
#include <stdlib.h>

double pie(double,int);

int main(int argc, char *argv[]){
    double x0= atof(argv[1]);
    int n = atoi(argv[2]);
    printf(" x = %lf\n",pie(x0,n));

    return 0;
}

double pie(double x0, int n){
    if (n==0){
        return x0;
    }
    if (x0>0.5){
        return pie(2 - 2*x0 , n-1 );
    }else{
        return pie(2*x0, n-1);
    }
}
