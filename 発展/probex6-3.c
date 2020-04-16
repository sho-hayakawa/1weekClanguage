// probex6-3(難易度：★)
// 次のプログラムは、時・分・秒で設定した時間（Time構造体で表現）の、差を秒で表示するものである。期待される実行例にならい、関数getDiffMinuteを記述して、プログラムを完成させなさい。

// #include <stdio.h>
 
// typedef struct{
//     int hour;   //  時間(0～23時）
//     int minute; //  分(0～59分)
//     int second; //  秒(0～59秒)
// }Time;
 
// //  時間の設定
// void setTime(Time*,int,int,int);
// //  時間の差を秒で取得
// int getDiffMinute(Time*,Time*);
 
// void main(){
//     Time start,end; //  開始時間と終了時間
//     int diff;
//     start.hour = 1; 
//     start.minute = 10;
//     start.second = 13;  //  開始時間は、1時10分13秒
//     end.hour = 2;
//     end.minute = 20;
//     end.second = 42;    //  終了時間は、2時20分42秒
//     diff = getDiffMinute(&start,&end);  //  2つの時間の差を秒で計算
//     printf("%d:%d:%dと、%d:%d:%dの違いは、%d秒です。¥n"
//         ,start.hour,start.minute,start.second,end.hour,end.minute,end.second,diff);
 
// }
 
// //  時間の設定
// void setTime(Time* time,int hour,int minute,int second){
//     time->hour = hour;
//     time->minute = minute;
//     time->second = second;
// }
 
// //  時間の差を秒で取得
// int getDiffMinute(Time* start,Time* end)
// {
//     //  ここで、2つの時間の違いを、秒で計算して返す。
     
// }
// 期待される実行結果
// 1:10:13と、2:20:42の違いは、4229秒です。


#include <stdio.h>
 
typedef struct{
    int hour;   //  時間(0～23時）
    int minute; //  分(0～59分)
    int second; //  秒(0～59秒)
}Time;
 
//  時間の設定
void setTime(Time*,int,int,int);
//  時間の差を秒で取得
int getDiffMinute(Time*,Time*);
 
int main(void){
  Time start,end; //  開始時間と終了時間
  setTime(&start, 1, 10, 13); //  開始時間は、1時10分13秒
  setTime(&end, 2, 20, 42);  //  終了時間は、2時20分42秒
  int diff = getDiffMinute(&start,&end);  //  2つの時間の差を秒で計算
  printf("%d:%d:%dと、%d:%d:%dの違いは、%d秒です。\n", start.hour, start.minute, start.second, end.hour, end.minute, end.second, diff);
  
  return 0;
}
 
//  時間の設定
void setTime(Time* time,int hour,int minute,int second){
    time->hour = hour;
    time->minute = minute;
    time->second = second;
}
 
//  時間の差を秒で取得
int getDiffMinute(Time* start,Time* end)
{
  //  ここで、2つの時間の違いを、秒で計算して返す。
  return (end->hour - start->hour)*60*60 + (end->minute - start->minute)*60 + (end->second - start->second);
     
}