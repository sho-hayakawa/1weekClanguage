// probex5-2(難易度：★★★)
// probex5-1と同じ結果を得られるプログラムを、strcpy()やstrcat関数といった、文字列操作関数を用いずに作りなさい。

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
  printf("%s%s\n", s1, s2);
  free(s1);
  free(s2);

  return 0;
}