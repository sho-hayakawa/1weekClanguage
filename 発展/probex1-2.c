// probex1-2.(難易度：★★)
// 1から10までの乱数を5回発生させ、表示するとともに、その最大値と最小値も表示するプログラムを作りなさい。
// 実行結果の例

// 5  10  4  7  3
// 最大値：10
// 最小値：3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned) time(NULL));
  int random[5], max=0, min=10;
  for(int i=0; i<5; i++) {
   random[i] = rand() % 10 + 1;
   printf("%d ", random[i]);
   if(random[i] > max) {
     max = random[i];
   }
   if(random[i] < min) {
     min = random[i];
   }
  }
  printf("\n最大値：%d\n", max);
  printf("最小値：%d\n", min);

  
  return 0;
}