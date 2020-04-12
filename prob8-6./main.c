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