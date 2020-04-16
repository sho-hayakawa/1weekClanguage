// probex7-7.(難易度：★★)
// テキストファイルscore.txtには、以下のように、ゲームの得点と、プレイヤーの名前の一覧が記述されている。このファイルを読み込み、プレイヤー名とスコアを表示し、中で最高得点を取得したプレイヤーの名前と点数を表示しなさい。

// score.txtの内容
// James,1000
// Tom,1200
// Steve,2800
// Bob,900
// 実行結果
// プレイヤー 得点
// --------------------
// James 1000点
// Tom 1200点
// Steve 2800点
// Bob 900点
// --------------------
// 最高得点：Steve(2800点)

#include <stdio.h>
#include <stdlib.h>

#define SIZE 256
#define PEOPLE 4

int main(void) {
  FILE *file;
  char c;
  char line[SIZE];
  char name[SIZE];
  char maxname[SIZE];
  int score = 0, maxscore = 0;
  line[0] = '\0';
  file = fopen("/Users/~/Desktop/1週間で身につくC言語の基本/発展/score.txt", "r");
  if(file == NULL) {
    printf("ファイルが開ません。");
    exit(1);
  }

  printf("プレイヤー 得点\n--------------------\n");
  while((fgets(line, SIZE, file)) != NULL) {
    sscanf(line,"%[^,],%d\n", name, &score);
    printf("%s\t%d点\n", name, score);
    if(score > maxscore){
      maxscore = score;
      sprintf(maxname, "%s", name);
    }
  }
  printf("--------------------\n最高得点：%s(%d)\n", maxname, maxscore);
  fclose(file);
  return 0;
}