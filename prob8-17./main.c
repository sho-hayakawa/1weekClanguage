// prob8-17.(難易度★★★)（友愛数）
// 異なる2つの自然数で、自分自身を除いた約数の和が、互いに他方と等しくなるような数をいう。例えば、220の自分自身を除いた約数は、1,2,4,5,10,11,20,22,44,55,110で、和は284となる。一方、284の自分自身を除いた約数は、1,2,4,71,142で、和は220である。よって、220と284の組み合わせは友愛数という。10000以下の友愛数をすべて求めなさい。
#include <stdio.h>

int addDivisor(int);

int main() {
  for(int i=1; i<10000; i++) {
    int a, b;
    a = addDivisor(i);
    b = addDivisor(a);
    if(i != a && i == b && i < a) {
      printf("(%d,%d) ", i, a);
    }
  }
  printf("\n");
  return 0;
}

int addDivisor(int a) {
  int sum = 0;
  for(int i=1; i < a; i++) {
    if(a%i == 0) {
      sum += i;
    }
  }
  return sum;
}