// probex1-4.(難易度：★)
// 以下のプログラムを改造し、1から10までの乱数同士の足し算を6回行うプログラムに改造しなさい。

// main.c
// #include <stdio.h>
 
// void main(){
//     int a = 1,b = 1;
//     printf("%d + %d = %d¥n",a,b,a+b);
// }
// 実行結果
// 1 + 1 = 2
// 改造後の実行結果
// 2 + 7 = 9
// 10 + 8 = 18
// 1 + 9 = 10
// 9 + 2 = 11
// 10 + 5 = 15
// 1 + 2 = 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand((unsigned) time(NULL));
  for(int i=0; i<6; i++) {
    int a, b;
    a = rand() % 10+1;
    b = rand() % 10+1;
    printf("%d + %d = %d\n",a,b,a+b);
  }
}