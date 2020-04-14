// probex2-2(難易度：★)
// -10から10までの乱数を4回発生させ、その数と、その絶対値を表示するプログラムを作りなさい。

// 期待される実行結果
// 1つ目の数値:1 絶対値1
// 2つ目の数値:-5 絶対値5
// 3つ目の数値:10 絶対値10
// 4つ目の数値:-8 絶対値8
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand((unsigned) time(NULL));
  for(int i=0; i<4; i++) {
    int random = rand() % (20+1) - 10;
    printf("%dつ目の数値:%d 絶対値%d\n", i+1, random, abs(random));
  }
}