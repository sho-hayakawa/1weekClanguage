// probex7-3.(難易度：★)
// キーボードから、文字列を入力し、それをファイルdata.txtに出力するプログラムを作りなさい。ただし、文字列として、qが入力された場合、キーボードからの入力、及び、データの書き込みは終了するものとする。

// 実行結果の例
// 文字列を入力してください:apple ← キーボードから入力
// 文字列を入力してください:car ← キーボードから入力
// 文字列を入力してください:airplane ← キーボードから入力
// 文字列を入力してください:q ← キーボードから入力
// data.txtの内容
// apple
// car
// airplane

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file;
  file = fopen("/~/~/~/1週間で身につくC言語の基本/発展/data.txt", "w");
  if(file == NULL) {
    printf("ファイルが開けません。\n");
    exit(1);
  }
  while(1) {
    char* line = NULL;
    line = (char*)malloc(sizeof(char)*256);
    printf("文字列を入力してください:");
    scanf("%s", line);
    if(*line == 'q') {
      break;
    }
    fprintf(file,"%s\n", line);
    free(line);
  }
  fclose(file);
  return 0;
}