// probex3-2(難易度：★★)
// 以下の例にならい、キーボードから入力したアルファベットを、すべて大文字にして表示するプログラムを作りなさい。なお、アルファベットを大文字にするには、文字コードと0xDFの論理積をとるとよい。

// 期待される実行結果
// Input words:HelloWorld  ←キーボードから入力
// HELLOWORLD
#include <stdio.h>

int main(){
  printf("Input words:");
  char ary[256];
  scanf("%s", ary);
  for(int i=0; ary[i]; i++){
    printf("%c", ary[i] & 0xDF);
  }
  puts("");
}