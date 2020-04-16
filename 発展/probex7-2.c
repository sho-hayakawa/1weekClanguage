// probex7-2.(難易度：★)
// 以下のデータは、sample.txtというファイルに書かれているデータの内容である。このデータを読み出し、コンソール画面に出力するプログラムを作成しなさい。

// sample.txtの内容
// This is C language.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main(void) {
  FILE *file;
  char line[SIZE];
  line[0] = '\0';
  file = fopen("/~/~/~/1週間で身につくC言語の基本/発展/sample.txt", "r");
  if(file == NULL) {
    printf("ファイルが開けません。\n");
    exit(1);
  }
  while(fgets(line, SIZE, file) != NULL) {
    printf("%s\n", line);
  }
  fclose(file);
  return 0;
}