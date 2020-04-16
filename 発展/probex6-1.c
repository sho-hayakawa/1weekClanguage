// probex6-1.(難易度：★)
// 以下のプログラムを実行すると結果は実行結果１のようになる。

// #include <stdio.h>
  
// typedef struct{
//     float x;
//     float y;
// }Vector2D;
 
// void main(){
//     Vector2D v1,v2;
//     printf("v1.x=");
//     scanf("%f",&(v1.x));
//     printf("v1.y=");
//     scanf("%f",&(v1.y));
//     printf("v2.x=");
//     scanf("%f",&(v2.x));
//     printf("v2.y=");
//     scanf("%f",&(v2.y));
//     printf("(%f,%f) + (%f,%f)=(%f,%f)¥n",v1.x,v1.y,v2.x,v2.y,(v1.x + v2.x),(v1.y + v2.y));
// }
// 実行結果1
// v1.x=1.0 ← キーボードから入力
// v1.y=1.0 ← キーボードから入力
// v2.x=2.0 ← キーボードから入力
// v2.y=3.0 ← キーボードから入力
// (1.000000,1.000000)+(2.000000,3.000000)=(3.000000,4.000000)
// このプログラムの一部を改造し、実行結果2のようになるようにプログラムを変えなさい。

// 実行結果2
// v1.x=1.0 ← キーボードから入力
// v1.y=1.0 ← キーボードから入力
// v2.x=2.0 ← キーボードから入力
// v2.y=3.0 ← キーボードから入力
// (1.000000,1.000000)+(2.000000,3.000000)=(3.000000,4.000000)
// (1.000000,1.000000)-(2.000000,3.000000)=(-1.000000,-2.000000)

#include <stdio.h>
  
typedef struct{
    float x;
    float y;
}Vector2D;
 
int main(void){
  Vector2D v1,v2;
  printf("v1.x=");
  scanf("%f",&(v1.x));
  printf("v1.y=");
  scanf("%f",&(v1.y));
  printf("v2.x=");
  scanf("%f",&(v2.x));
  printf("v2.y=");
  scanf("%f",&(v2.y));
  printf("(%f,%f) + (%f,%f)=(%f,%f)\n", v1.x, v1.y, v2.x, v2.y, (v1.x + v2.x), (v1.y + v2.y));
  printf("(%f,%f) - (%f,%f)=(%f,%f)\n", v1.x, v1.y, v2.x, v2.y, (v1.x - v2.x), (v1.y - v2.y));

  return 0;
}