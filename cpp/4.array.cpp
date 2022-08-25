#include <stdio.h>

int main(){
    int arr[100] = {};

    int n;
    scanf("%d", &n);
    if(n > 100){
        printf("out of range\n");
        return 0;
    }

    for(int i = 0; i < n; i++)
        arr[i] = i;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
 * set int array size of 100
 * when input is bigger than 100, return 0
 * else, print 0 to n-1
 */
