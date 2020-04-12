// prob8-16.(難易度★★★)（並べ替え）
// 長さ10の整数の配列を作成し、各々の中に1から100までの乱数を代入し、その数を大きい順番に並べ替えて表示しなさい。なお、並べ替えの方法としては、以下の方法を用いなさい。

// ① 配列の中から、最大の数を探し出す。
// ② ①で見つけた数と、配列の最初の数を入れ替える。
// ③ 次に、配列の２番目から最後の中でもっとも大きな数を見つけ出す。
// ④ ③で見つけた数と、配列の２番目の数を入れ替える。
// ⑤ これを最後10番目まで繰り返す。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned)time(NULL));
  int ary[10];
  for(int i=0; i<10; i++) {
    ary[i] = rand() % 100 + 1;
    printf("%d ", ary[i]);
  }
  printf("\n");

  for(int i=0; i<10; i++) {
    int max = 0;
    for(int j=i; j<10; j++) {
      if(max<ary[j]) {
        max = ary[j];
      }
    }
    int tmp = ary[i];
    ary[i] = max;
    int index;
    for(int j=i; j<10; j++) {
      if(max == ary[j]) {
        index = j;
      }
    }
    ary[index] = tmp;
    if(i == 9) {
      for(int j=0; j<10; j++) {
        printf("%d ", ary[j]);
      }
      printf("\n");
    }
  }
  

  return 0;
}