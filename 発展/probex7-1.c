// probex7-1.(難易度：★)
// HelloWorld.txtというファイルに、"HelloWorld."と書き出すプログラムを作成しなさい。

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file;
  file = fopen("/~/~/~/1週間で身につくC言語の基本/発展/HelloWorld.txt", "w");
  if(file == NULL) {
    printf("ファイルが開けません。\n");
    exit(1);
  }
  fprintf(file, "Hello World\n");
  fclose(file);
  return 0;
}