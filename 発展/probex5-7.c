// probex5-7.(難易度：★)
// 以下のプログラムは、文字列として定義されている「100」を、整数の値に変換して出力するプログラムである。/** **/でコメントされている部分に、不完全な部分を実装し、プログラムを完成させなさい。
// #include <stdio.h>
// #include <string.h>
// void main(){
//     char[] numString = "100";   //  数値の文字列
//     int num;    //  numStringの数値を入れる変数
//     /**
//         numStringを整数値に変換し、numに代入
//     **/
//     printf("%d\n",num);
// }
// 期待される実行結果
// 100

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char numString[] = "100";   //  数値の文字列
  int num;    //  numStringの数値を入れる変数
  // numStringを整数値に変換し、numに代入
  num = atoi(numString);
  printf("%d\n",num);

  return 0;
}