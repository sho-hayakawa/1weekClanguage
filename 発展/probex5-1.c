// probex5-1(難易度：★)
// キーボードから2つの字列を入力し、その2つを結合した文字列を表示するプログラムを作成しなさい。ただし、最終的に出力する文字列は、strcpy()および、strcat()関数を用いて、2つの文字列を1つに統合したものにすること。

// 期待される実行結果
// 文字列1：ABC ← キーボードから入力
// 文字列2：DEF ← キーボードから入力
// 結合した結果：
// ABCDEF

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[256];
  char* s1 = NULL;
  char* s2 = NULL;
  s1 = (char*)malloc(sizeof(char)*256);
  s2 = (char*)malloc(sizeof(char)*256);
  printf("文字列1：");
  scanf("%s", s1);
  strcpy(str, s1);
  free(s1);
  printf("文字列2：");
  scanf("%s", s2);
  strcat(str, s2);
  free(s2);
  printf("%s\n", str);

  return 0;
}