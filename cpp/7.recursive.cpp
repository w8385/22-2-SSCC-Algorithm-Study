#include <stdio.h>

void   to_one(int n);
int     sum_n(int n);
int fibonacci(int n);

int main(){
    int n;
    scanf("%d", &n);

    printf("to_one : ");
    to_one(n);
    printf("\n");

    printf("sum : %d\n", sum_n(n));

    printf("fibonacci : %d", fibonacci(n));

    return 0;
}

void to_one(int n){
    if(n < 0)
        return;

    printf("%d ", n);
    return to_one(n-1);
}

int sum_n(int n){
    if(n == 1)
        return 1;
    return n + sum_n(n-1);
}

int fibonacci(int n){
    if(n < 2)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}