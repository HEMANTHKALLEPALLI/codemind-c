#include <stdio.h>

int main() {
   int T, N, M, K;

   scanf("%d", &T);  // Read the number of test cases

   while (T--) {
       scanf("%d %d %d", &N, &M, &K);  // Read the values for each test case

       // Check if there's enough space for all N friends
       if (N + K <= M) {
           printf("YES
");  // All friends can enroll
       } else {
           printf("NO
");  // Not enough space for all friends
       }
   }

   return 0;
}
