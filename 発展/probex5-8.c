// probex5-8.(難易度：★★)
// キーボードから3つの文字列を入力させ、そのうち最も長い文字列を表示するプログラムを作りなさい。ただし、同じ長さの文字列が複数ある場合は、すべて表示すること。

// 期待される実行結果の例①(最長のものが1つしかない場合)
// 文字列１：lemon  ← キーボードから入力
// 文字列２：apple  ← キーボードから入力
// 文字列３：pineapple  ← キーボードから入力

// もっとも長い文字列：
// pineapple
// 期待される実行結果の例②(最長のものが複数の場合)
// 文字列１：yellow  ← キーボードから入力
// 文字列２：green  ← キーボードから入力
// 文字列３：orange  ← キーボードから入力

// もっとも長い文字列：
// yellow
// orange

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int*);

int main(void) {
  char str[3][256];
  printf("文字列１：");
  scanf("%s", str[0]);
  printf("文字列２：");
  scanf("%s", str[1]);
  printf("文字列３：");
  scanf("%s", str[2]);
  int len[] = {strlen(str[0]), strlen(str[1]), strlen(str[2])};
  for(int i=0; i<3; i++) {
    if(len[i] == max(len)) {
      printf("%s\n", str[i]);
    }
  }

  return 0;
}

int max(int* p) {
  if(*p >= *(p+1) && *p >= *(p+2)) {
    return *p;
  } else if(*(p+1) >= *(p+2)) {
    return *(p+1);
  } else {
    return *(p+2);
  }
}