#include <stdio.h>

int sum_del(int a, int i) {
    if (i > a / 2) return 0;
    
    if (a % i == 0){
        return i + sum_del(a, i + 1);
    }else{
        return sum_del(a, i + 1);  
    } 
}

int main() {
    int N, M, flag=0;
    
    if(scanf("%i %i", &N, &M)!=2) return 1;
    if(N<=0 || M<=0) return 1;
    if(N>M) return 1;
    
    for (int i = N; i <= M; i++) {
        if (sum_del(i, 1) > i) {
            printf("%d ", i);
            flag = 1;
        }
    }
    
    if(flag==0){
        printf("Таких чисел нет");
    }

    return 0;
}
