#include <stdio.h>
#include <stdlib.h>

void change_pointer(int **ptr) {
    // 동적 메모리 할당
    *ptr = (int *)malloc(sizeof(int));
    **ptr = 100;
}

int main() {
    int *p = NULL;
    printf("초기 p의 주소: %p\n", p);

    change_pointer(&p); // p의 주소를 전달
    printf("변경 후 p의 주소: %p, p가 가리키는 값: %d\n", p, *p);

    free(p);
    return 0;
}

// 이중포인터 예시 1 (포인터 변수의 값 변경)