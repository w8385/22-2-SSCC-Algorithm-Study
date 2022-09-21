#include <stdio.h>

int main(){
    // if, else
    int n;
    scanf("%d", &n);

    if(n == 0){
        printf("is zero\n");
    }
    else if(0 < n){
        printf("is positive\n");
    }
    else{
        printf("is negative\n");
    }

    // for
    int f;
    scanf("%d", &f);

    for(int i = 0; i < f; i++)
        printf("%d ", i);
    printf("\n");

    // while
    int w;
    scanf("%d", &w);

    while(w--)
        printf("%d ", w);



    return 0;
}

/*
 * when input is 0, print SSCC once
 * else, print SSCC as absolute value of input
 */