// 長さ10の整数型の配列変数に、１から100の整数をランダムに代入し、その値を偶数と奇数に分類して、それぞれの値を入れる配列に再代入し、その値を以下の例のように表示しなさい。
// 例
// 1  10  22  51  3  17  21  98  100  2
// 偶数：10  22  98  100  2
// 奇数：1  51  3  17  21
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// プロトタイプ宣言
void initRandom();
int setRandom(int, int);


int main() {
  initRandom();
  int ary[10];
  for(int i=0; i<10; i++) {
    ary[i] = setRandom(1, 100);
    printf("%d ", ary[i]);
  }
  printf("\n");
  printf("偶数：");
  for(int i=0; i<10; i++) {
    if(ary[i]%2 == 0) {
      printf("%d ", ary[i]);
    }
  }
  printf("\n");
  printf("奇数：");
  for(int i=0; i<10; i++) {
    if(ary[i]%2 != 0) {
      printf("%d ", ary[i]);
    }
  }
  printf("\n");
  return 0;
}

void initRandom() {
  srand((unsigned)time(NULL));
}

int setRandom(int a, int b) {
  return  rand() % b + a;
}