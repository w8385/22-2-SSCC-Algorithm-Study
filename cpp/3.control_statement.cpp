#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n == 0){
        printf("SSCC\n");
    }
    else if(n > 0){
        for(int i = 0; i < n; i++){
            printf("SSCC\n");
        }
    }
    else{
        while(n < 0) {
            printf("SSCC\n");
            n++;
        }
    }

    return 0;
}

/*
 * when input is 0, print SSCC once
 * else, print SSCC as absolute value of input
 */