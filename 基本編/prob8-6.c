// prob8-6.(難易度★★★)（分数の計算１）
// 2つの分数同士の足し算をし、その結果を分数で表示するプログラムを作りなさい。このとき、分子、分母共に最大値が10で、最小値は分母が2、分子が１とする。それらの数値をランダムに発生させ、以下のように結果を表示させなさい。ただし、計算結果は、分子と分母がきちんと約分されていることとする。また、分子が分母の数で割り切れる場合は、整数として表示するものとする。
// 例
// 1/5 + 2/3 = 13/15     ← 通常のケース
// 2/3 + 3/8= 1.1/24     ← 帯分数になるケース

// 1/6 + 1/3= 1/2          ← 約分されるケース
// 1/2 + 1/2 = 1            ← 整数になるケース
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// グローバル変数
int numer[3], denom[3];

// プロトタイプ宣言
void initRandom();
void makeFraction(int);
void add();
int gcd(int, int);
void reduceFraction(int);
void showResult();


int main() {
  initRandom();
  makeFraction(0);
  makeFraction(1);
  add();
  reduceFraction(2);
  showResult();
  return 0;
}

void initRandom() {
  srand((unsigned)time(NULL));
}

void makeFraction(int a) {
  numer[a] = rand() % 10 + 1;
  denom[a] = rand() % 9 + 2;
  reduceFraction(a);
}

void add() {
  numer[2] = numer[0]*denom[1] + numer[1]*denom[0];
  denom[2] = denom[0]*denom[1];
}

int gcd(int a, int b) {
  if(a<b) {
    int tmp = a;
    a = b;
    b = tmp;
  }
  int r;
  r = a % b;
  while(r != 0) {
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

void reduceFraction(int a) {
  numer[a] /= gcd(numer[a], denom[a]);
  denom[a] /= gcd(numer[a], denom[a]);
}

void showResult() {
  printf("%d/%d + %d/%d = ", numer[0], denom[0], numer[1], denom[1]);
  if(numer[2]%denom[2] == 0) {
    printf("%d\n", numer[2]/denom[2]);
  } else if(numer[2] > denom[2]) {
    printf("%d.%d/%d\n", numer[2]/denom[2], numer[2]%denom[2], denom[2]);
  } else {
    printf("%d/%d\n", numer[2], denom[2]);
  }
}