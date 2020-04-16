// probex7-4.(難易度：★★)
// 以下の、words7-4.txtには、,(コンマ)で区切られた単語が入っている。このファイルを読み込み、書かれている単語を画面に出力するプログラムを作りなさい。

// words.txtの内容
// apple,orange,banana,pineapple
// 実行結果
// apple
// orange
// banana
// pineapple

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file;
  int c;
  file = fopen("/~/~/~/1週間で身につくC言語の基本/発展/words7-4.txt", "r");
  if(file == NULL) {
    printf("ファイルが開ません。");
    exit(1);
  }
  while((c = fgetc(file)) != EOF) {
    if(c == ',') {
      printf("\n");
    } else {
      printf("%c", c);
    }
  }
  fclose(file);
  printf("\n");
  return 0;
}