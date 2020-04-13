// probex1-3.(難易度：★★)
// 長さ5の整数型の配列変数aに、すべての成分に0から100の乱数の値を代入して表示し、以下の条件を満たす数値の個数を表示するプログラムを作りなさい。
// (1) 20以上50以下の数
// (2) 80より大きい数
// (3) 0以上10未満の数

// 実行結果の例
// a[0]=9  a[1]=7  a[2]=35  a[3]=91  a[4]=58
// 20以上50以下の数：1個
// 80より大きい数：1個
// 0以上10未満の数:2個
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned) time(NULL));
  int a[5], low=0, middle=0, high=0;
  for(int i=0; i<5; i++) {
   a[i] = rand() % (100+1);
   printf("a[%d]=%d ", i, a[i]);
   if(a[i] >= 20 && a[i] <50) {
     middle++;
   }else if(a[i] > 80) {
     high++;
   }else if(a[i] >= 0 && a[i] < 10){
     low++;
   }
  }
  printf("\n20以上50以下の数：%d個\n", middle);
  printf("80より大きい数：%d個\n", high);
  printf("0以上10未満の数:%d個\n", low);

  
  return 0;
}