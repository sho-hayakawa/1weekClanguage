#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// プロトタイプ宣言
void initRandom();
int setRandom(int, int);
void checkDivisor(int);

int main() {
  initRandom();
  int random = setRandom(1,1000);
  printf("%d\n", random);
  checkDivisor(random);
  return 0;
}

void initRandom() {
  srand((unsigned)time(NULL));
}

int setRandom(int a, int b) {
  return  rand() % b + a;
}

void checkDivisor(int a) {
  for(int i=1; i <= a; i++) {
    if(a%i == 0) {
      printf("%d ", i);
    }
  }
  printf("\n");
}