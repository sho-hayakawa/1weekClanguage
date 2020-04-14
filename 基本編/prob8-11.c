// 1,1から始まり、前の2つの値の和を次の値とする数列のことを、フィボナッチ数列という（以下の例を参照）。このとき、40までのフィボナッチ数列を求めてint型の配列に代入し、表示しなさい。
// 例
// 1  1  2  3  5  8  13  …

#include <stdio.h>

int main() {
  int sequence[100];
  sequence[0] = 1;
  sequence[1] = 1;
  printf("%d ", sequence[0]);
  printf("%d ", sequence[1]);
  for(int i=2; sequence[i-1] < 40; i++) {
    sequence[i] = sequence[i-2] + sequence[i-1];
    if(sequence[i] < 40) {
      printf("%d ", sequence[i]);
    }
  }
  printf("\n");
  return 0;
}