#include <stdio.h>

int main(){
/*
 * set int array size of 10
 * print 0 to n-1
 */
    int arr[10] = {};

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        arr[i] = i;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

/*
 * set 2D array size of 10 * 10
 * input row, col
 * print every member
 */

    int map[10][10] = {};

    int row, col;
    scanf("%d%d", &row, &col);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}


