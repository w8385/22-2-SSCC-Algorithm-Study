#include <stdio.h>

// 두 수의 합 출력
void plus_print(int a, int b){
    printf("%d\n", a + b);
}

// 두 수의 합 반환
int plus(int a, int b){
    return a + b;
}

bool is_zero(int n){
    return not n;
}

int main(){
    // 두 수의 합
    int a, b;
    scanf("%d%d", &a, &b);

    plus_print(a, b);
    printf("%d\n", plus(a, b));

    // 입력 값이 0인가?
    int n;
    scanf("%d", &n);

    if(is_zero(n))
        printf("n is zero");
    else
        printf("n is not zero");
}