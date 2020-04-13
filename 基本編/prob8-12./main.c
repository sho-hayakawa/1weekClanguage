// prob8-12.(難易度★★)（トリボナッチ数列）
// 1,1,2から始まり、前の３つの値の和を次の値とする数列のことを、トリボナッチ数列という（以下の例を参照）。このとき、30までのトリボナッチ数列を求めてint型の配列に代入し、表示しなさい。
// 例
// 1  1  2  4  7  13  24  …

#include <stdio.h>

int main() {
  int sequence[100];
  sequence[0] = 1;
  sequence[1] = 1;
  sequence[2] = 2;
  printf("%d ", sequence[0]);
  printf("%d ", sequence[1]);
  printf("%d ", sequence[2]);
  for(int i=3; sequence[i-1] < 30; i++) {
    sequence[i] = sequence[i-3] + sequence[i-2] + sequence[i-1];
    if(sequence[i] < 30) {
      printf("%d ", sequence[i]);
    }
  }
  printf("\n");
  return 0;
}