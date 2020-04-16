// probex7-6.(難易度：★★)
// 以下の、words7-6.txtには、,(コンマ)で区切られた英単語が入っている。この単語のなかから、"a"で始まる文字列のみを表示し、その数も出力しなさい。

// words7-6.txtの内容
// apple,orange,angel,lucky
// 実行結果
// aから始まる単語
// apple
// angel
// ----------
// 個数：2

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file;
  int c;
  file = fopen("/Users/~/Desktop/1週間で身につくC言語の基本/発展/words7-6.txt", "r");
  if(file == NULL) {
    printf("ファイルが開ません。");
    exit(1);
  }
  char word[256][256];
  int i=0, j=0;
  while((c = fgetc(file)) != EOF) {
    if(c == ',') {
      i++;
      j=0;
    } else {
      word[i][j] = c;
      j++;
    }
  }
  fclose(file);
  int count=0;
  for(i=0; i<256; i++) {
    if(word[i][0] == '\0') {
      break;
    } else if(word[i][0] == 'a') {
      printf("%s\n", word[i]);
      count++;
    }
  }
  printf("----------\n 個数：%d\n", count);
  return 0;
}