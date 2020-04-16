// probex7-5.(難易度：★★)
// 以下の、nums.txtには、,(コンマ)で区切られた整数値が入っている。このファイルを読み込み、書かれている整数値とその合計を画面に出力するプログラムを作りなさい。

// nums.txtの内容
// 10,3,7,8
// 実行結果
// 10
// 3
// 7
// 8
// ----------
// 合計：28

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *file;
  char c;
  file = fopen("/Users/~/Desktop/1週間で身につくC言語の基本/発展/nums.txt", "r");
  if(file == NULL) {
    printf("ファイルが開ません。");
    exit(1);
  }
  int num = 0, digit = 0, sum = 0;  //  数字とその桁チェック、合計を入れる変数
  while((c = fgetc(file)) != EOF) {
    if(c != ',') {
      printf("%c", c);
      if(digit != 0) {  //  数字が一桁ではないとき
        num *= 10;      //  10倍してから足す
      }
      num += atoi(&c);
      digit++;
    } else {
      printf("\n");
      sum += num;       //  数字を合計に足す
      num = 0;          //  numとdigitの初期化
      digit = 0;
    }
  }
  sum += num;   //最後の数字をたす
  printf("\n----------\n合計：%d\n", sum);
  fclose(file);
  return 0;
}