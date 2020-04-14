// probex4-2.(難易度：★★★)
// 実行結果の例を参考にして、長さ5の整数型の配列変数aに、すべての成分に0から100の乱数の値を代入して表示し、以下の条件を満たす数値を表示するプログラムを作りなさい。
// (1) 5つの整数の値は、グローバル変数ではない配列変数に入れること
// (2) の配列への値の表示、値の二倍は、それぞれ専用の関数を用いること。
// (3) の引数として、整数型ポインタをを用いること。

// 実行結果の例
// 発生した乱数：
// 1 5 2 8 9
// 二倍した値：
// 2 10 4 16 18
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showNum(int*);
void doubleNum(int*);

int main(void) {
  srand((unsigned) time(NULL));
  int num[5];
  int i;
  printf("発生した乱数：\t");
  for(i=0; i<5; i++) {
    *(num+i) = rand() % (100+1);
    showNum(num+i);
  }
  printf("\n二倍した値：\t");
  for(i=0; i<5;i++) {
    doubleNum(num+i);
  }
  printf("\n");

  return 0;
}

void showNum(int* p) {
  printf("%d\t", *p);
}

void doubleNum(int* p) {
  printf("%d\t", *p * 2);
}
