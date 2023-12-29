#include <stdio.h>

int main() {
   int N;

   
   scanf("%d", &N);

 //  printf("Multiplication table of %d up to 12 terms:
", N);

   for (int i = 1; i <= 12; i++) {
       printf("%d x %d = %d
", N, i, N * i);
   }

   //return 0;
}
