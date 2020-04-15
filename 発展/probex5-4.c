// probex5-4(難易度：★★)
// probex5-3と同じ結果を得られるプログラムを、strlen関数を用いないで作りなさい。

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char* str = NULL;
  str = (char*)malloc(sizeof(char)*256);
  printf("文字列を入力：");
  scanf("%s", str);
  int* len = NULL;
  len = (int*)malloc(sizeof(int));
  for(int i=0; i<256; i++) {
    if(*(str+i) == '\0') {
      *len = i;
      break;
    }
  }
  free(str);
  printf("文字列の長さ：%d文字\n", *len);
  free(len);

  return 0;
}