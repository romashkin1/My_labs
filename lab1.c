#include<stdio.h>
#include<math.h>

double result1(float x, float y){
    double p1 = exp(1.0) * sin(x * x) - sqrt(y);
    double p2 = 1.0 / tan(cbrt(x * y * y));
    return fmax(p1, p2);
}

double result2(float x, float y){
    return cos(x*y*y);
}

int main(){
    float x = 1.0, hx = 1.3, y = 2.0, hy = 1.5;
    double U;

    for(float i = x; i<=3.1; i+=hx){
        for(float j = y; j<=4.1; j+= hy){
            if(i/(j*j) < 1.0){
                U = result1(i,j);
                printf("x = %f, y = %f, U = %f\n", i, j, U);
            }else{
                U = result2(i,j);
                printf("x = %f, y = %f, U = %f\n", i, j, U);
            }
        }
    }

    return 0;
}
