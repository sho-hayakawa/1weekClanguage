// prob8-13.(難易度★★)（集合）
// 長さ10の整数型の配列変数を２つ用意し、それぞれに、各要素に１から10の乱数を代入し、以下のようにそれぞれの配列に共通する値の一覧のみが入った配列と、２つのうちどちらかに入る数値の一覧を小さい順に代入した配列を作りなさい。
// 例
// 配列1:  4  9  4  3  6  8  7  1  3  10
// 配列2:  7  3  10  7  5  9  4  9  9  1
// 共通の数：1  3  4  7  9  10
// どちらか入っている数：1  3  4  5  6  7  8  9  10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//グローバル変数
int ary[2][10];

// プロトタイプ宣言
void initRandom();
void setRandom(int, int, int);
void showAry(int);

int main() {
  initRandom();
  setRandom(0, 1, 10);
  setRandom(1, 1, 10);
  showAry(0);
  showAry(1);
  printf("共通の数：");
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      for(int k=0; k<10; k++) {
        if(i == ary[0][j] && i == ary[1][k]) {
          printf("%d ", i);
          i++;
        }
      }
    }
  }
  printf("\n");
  printf("どちらかに入っている数：");
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      for(int k=0; k<10; k++) {
        if(i == ary[0][j] || i == ary[1][k]) {
          printf("%d ", i);
          i++;
        }
      }
    }
  }
  printf("\n");
  return 0;
}

void initRandom() {
  srand((unsigned)time(NULL));
}

void setRandom(int a, int b, int c) {
  for(int i=0; i<10; i++) {
    ary[a][i] = rand() % c + b;
  }
}

void showAry(int a) {
  printf("配列%d：", a+1);
  for(int i=0; i<10; i++) {
    printf("%d  ", ary[a][i]);
  }
  printf("\n");
}