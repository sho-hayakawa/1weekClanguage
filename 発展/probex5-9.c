// probex5-9.(難易度：★★)
// 以下の条件と、実行結果の例をもとにして、キーボードから入力した文字列を反転させるプログラムを作りなさい。
// (1) 文字列の長さの最大値は16文字。
// (2) キーボードから入力された文字列を、その長さ＋１の配列変数をmalloc()で生成させて代入する。
// (3) (2)で生成させた配列に、入力させた文字列を反転させたデータを入れる。
// (4) 結果を出力する。
// (5) 生成したメモリを、free()で開放する。

// 期待される実行結果の例

// 文字列を入力（最大16文字）:ABCDE ← キーボードから入力
// EDCBA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *str = NULL;
  str = (char*)malloc(sizeof(char)*(16+1));
  printf("文字列を入力（最大16文字）:");
  scanf("%s", str);
  int *len = NULL;
  len = (int*)malloc(sizeof(int));
  *len = strlen(str);
  for(int i=0; i<*len/2; i++) {
    int tmp = str[i];
    str[i] = str[*len-1-i];
    str[*len-1-i] = tmp;
  }
  printf("%s\n", str);
  free(str);
  free(len);

  return 0;
}