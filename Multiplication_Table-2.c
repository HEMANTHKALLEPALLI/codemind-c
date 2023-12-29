#include <stdio.h>

int main() {
    int N, R;

    
    scanf("%d %d", &N, &R);

 //   printf("Multiplication table of %d up to %d terms:
", N, R);

    for (int i = 1; i <= R; i++) {
        printf("%d x %d = %d
", N, i, N * i);
    }

    return 0;
}
