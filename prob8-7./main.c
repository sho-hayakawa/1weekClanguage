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
void showResult(int);


int main() {
  initRandom();
  makeFraction(0);
  printf(" + ");
  makeFraction(1);
  printf(" = ");
  add();
  printf("\n");
  return 0;
}

void initRandom() {
  srand((unsigned)time(NULL));
}

void makeFraction(int a) {
  numer[a] = rand() % 10 + 1;
  denom[a] = rand() % 10 + 1;
  reduceFraction(a);
  showResult(a);
}

void add() {
  numer[2] = numer[0]*denom[1] + numer[1]*denom[0];
  denom[2] = denom[0]*denom[1];
  reduceFraction(2);
  showResult(2);
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

void showResult(int a) {
  if(numer[a]%denom[a] == 0) {
    printf("%d", numer[a]/denom[a]);
  } else if(numer[a] > denom[a]) {
    printf("%d.%d/%d", numer[a]/denom[a], numer[a]%denom[a], denom[a]);
  } else {
    printf("%d/%d", numer[a], denom[a]);
  }
}