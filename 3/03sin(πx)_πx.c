#include <stdio.h>
#include <math.h>

int main(){
    double x,y;
    for (x= -5*M_PI; x<= 5*M_PI ; x = x + (M_PI)/100.0){
        y= (sin(M_PI*x))/(M_PI*x);
        printf("%f %f\n",x,y);
    }
    return 0;
}
