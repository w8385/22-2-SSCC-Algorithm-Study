#include <stdio.h>

int main(){
    // 문자 입출력
    char c;
    printf("input char :");
    scanf("%c", &c);
    printf("%c\n", c);

    // 문자열 입출력
    char s[10];
    printf("input string :");
    scanf("%s", s);
    printf("%s\n", s);

    // 정수 입출력
    int n;
    printf("input int :");
    scanf("%d", &n);
    printf("%d\n", n);

    // 실수 입출력
    float f;
    printf("input float :");
    scanf("%f", &f);
    printf("%f\n", f);

    return 0;
}