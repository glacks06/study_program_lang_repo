#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3;
    int cols = 4;

    // 행을 가리키는 포인터들의 배열을 위한 메모리 할당
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) { return 1; }

    // 각 행에 대한 메모리 할당
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) { return 1; }
    }

    // 값 할당 및 출력
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // 메모리 해제
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

// 이중포인터 예시 2 (2차원 배열 할당)