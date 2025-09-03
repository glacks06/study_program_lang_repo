#include <stdio.h>


void f(int v){
    static int a = 10;
    int b = 10;
    a++;
    printf("%d. a = %d, size = %d, adress = %p\n", v, a, sizeof(a), &a);
    printf("- %p\n", &b);
}

int main(){
    for(int i = 0; i < 10; i++){
        f(i+1);
    }
}

// static 변수