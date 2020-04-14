// probex1-1.(難易度：★)
// 1から10までの乱数を5回発生させ、表示するプログラムを作りなさい。

// 実行結果の例
// 1  9  10  7  3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned) time(NULL));
  int random[5];
  for(int i=0; i<5; i++) {
   random[i] = rand() % 10 + 1;
   printf("%d ", random[i]);
  }
  printf("\n");

  
  return 0;
}