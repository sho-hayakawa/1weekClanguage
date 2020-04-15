// probex5-5.(難易度：★)
// キーボードから2つの文字列を入力し、2つが同じものならば、「同じものです」と表示し、違うのならば、「違うものです」と表示するプログラムを作りなさい。ただし、文字列の比較にはstrcmp()関数を用いること。

// 期待される実行結果①（二つの文字列が同じ場合）
// 文字列１：ABC ← キーボードから入力
// 文字列２：ABC ← キーボードから入力
// 同じものです
// 期待される実行結果②（二つの文字列が異なる場合）
// 文字列１：ABC ← キーボードから入力
// 文字列２：DEF ← キーボードから入力
// 異なるものです

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char* s1 = NULL;
  char* s2 = NULL;
  s1 = (char*)malloc(sizeof(char)*256);
  s2 = (char*)malloc(sizeof(char)*256);
  printf("文字列1：");
  scanf("%s", s1);
  printf("文字列2：");
  scanf("%s", s2);
  if(strcmp(s1, s2) == 0) {
    printf("同じものです\n");
  } else {
    printf("異なるものです\n");
  }
  free(s1);
  free(s2);

  return 0;
}