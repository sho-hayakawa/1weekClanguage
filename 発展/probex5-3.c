// probex5-3(難易度：★)
// キーボードから文字列を入力し、その文字列の長さを表示するプログラムを作りなさい。この時、strlen()関数を用いること。

// 期待される実行結果
// 文字列を入力：ABCDEF ←キーボードから入力
// 文字列の長さ：6文字

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char* str = NULL;
  str = (char*)malloc(sizeof(char)*256);
  printf("文字列を入力：");
  scanf("%s", str);
  printf("文字列の長さ：%lu文字\n", strlen(str));

  return 0;
}