// 自分自身以外の約数の総和が自分自身に等しくなる自然数を完全数とう。例えば6の約数は1,2,3でその和は6となりますので完全数である。10000以下の整数の中から、全ての完全数を探し出し表示するプログラムを作りなさい。
#include <stdio.h>

// プロトタイプ宣言
int addDivisor(int);
void checkPerfectNumber(int);

int main() {
  checkPerfectNumber(10000);
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

void checkPerfectNumber(int a) {
  for(int i=1; i<a; i++) {
    int sum = addDivisor(i);
    if(i == sum) {
      printf("%d ", i);
    }
  }
}