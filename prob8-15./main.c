// prob8-15.(難易度★★★)（素因数分解）
// 2から100の乱数を発生させ、その数を素因数分解するプログラムを作成しなさい。素因数分解とは、 数値を、素数の積で表すことであり、例えば、72 = 2 × 2 × 2 × 3 × 3といったように表現することである。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prime[100], count=0;

void setPrime();

int main() {
  srand((unsigned)time(NULL));
  int num = rand() % 99 + 2;
  printf("%d = ", num);
  setPrime();
  for(int i=0; i<count; i++) {
    for(int j=0; j<count; j++) {
      if(num%prime[j] == 0) {
        printf("%d ", prime[j]);
        num /= prime[j];
        if(num/prime[j] != 0) {
          printf("x ");
        }
        break;
      }
    }
  }
  printf("\n");
}

void setPrime() {
  int ary[100];
  // 配列aryに2-100までの数値をセット
  for(int i=2; i<=100; i++) {
    ary[i] = i;
  }

  // エラトステネスのふるい aryは0と100以下の素数の配列に
  for(int i=2; i<=100; i++) {
    if(ary[i] != 0) {
      for(int j=0; j<=100; j++) {
        if(ary[j]%i == 0 && ary[j] != i) {
          ary[j] = 0;
        }
      }
    }
  }

  // 配列aryを整理し、100以下の素数を順番に並べた配列prime
  for(int i=2; i<=100; i++) {
    if(ary[i] != 0) {
      prime[count] = i;
      count++;
    }
  }
}