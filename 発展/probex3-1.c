// probex3-1(難易度：★★)
// 以下の例にならい、キーボードから入力したアルファベットを、すべて小文字にして表示するプログラムを作りなさい。なお、アルファベットを小文字にするには、文字コードと0x20の論理和をとるとよい。

// 期待される実行結果
// Input words:HelloWorld  ←キーボードから入力
// helloworld
#include <stdio.h>

int main(){
  printf("Input words:");
  char ary[256];
  scanf("%s", ary);
  for(int i=0; ary[i]; i++){
    printf("%c", ary[i] | 0x20);
  }
  puts("");
}