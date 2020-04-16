// probex6-2.(難易度：★)
// 以下のプログラムは、学生を管理するプログラムでる。一人の学生の、①名前(name)、②学生番号(id)、③性別(sex)、④学年(grade)をそれぞれ管理している。これら①～④のパラメータを、一つの構造体student_dataにまとめて、以下のプログラムを書き直しなさい。

// #include <stdio.h>
// #include <string.h>
  
// #define STUDENT_NUM (5)
 
// char name[STUDENT_NUM][256];    //  学生の名前
// int id[STUDENT_NUM];        //  学生番号
// int sex[STUDENT_NUM];       //  性別(性別 0:男 1:女)
// int grade[STUDENT_NUM];     //  学年
 
// void main(){
//     int i;
//     //  名前の設定
//     strcpy(name[0],"青木一");
//     strcpy(name[1],"遠藤京子");
//     strcpy(name[2],"加藤悟");
//     strcpy(name[3],"佐々木八重子");
//     strcpy(name[4],"田中徹");
//     //  学生番号の設定
//     id[0] = 1001;
//     id[1] = 1002;
//     id[2] = 1003;
//     id[3] = 1004;
//     id[4] = 1005;
//     //  性別の設定
//     sex[0] = 0;
//     sex[1] = 1;
//     sex[2] = 0;
//     sex[3] = 1;
//     sex[4] = 0;
//     //  学年
//     grade[0] = 1;
//     grade[1] = 1;
//     grade[2] = 1;
//     grade[3] = 1;
//     grade[4] = 1;
//     //  学生のデータの表示
//     for(i = 0; i < STUDENT_NUM; i++){
//         printf("名前:%s\n",name[i]);
//         printf("性別:");
//         if(sex[i] == 0){
//             printf("男\n");
//         }else{
//             printf("女\n");
//         }
//         printf("学生番号:%d\n",id[i]);
//         printf("学年:%d\n\n",grade[i]);
//     }
// }
// 実行結果
// 名前:青木一
// 性別:男
// 学生番号:1001
// 学年:1

// 名前:遠藤京子
// 性別:女
// 学生番号:1002
// 学年:1

// 名前:加藤悟
// 性別:男
// 学生番号:1003
// 学年:1

// 名前:佐々木八重子
// 性別:女
// 学生番号:1004
// 学年:1

// 名前:田中徹
// 性別:男
// 学生番号:1005
// 学年:1

#include <stdio.h>
#include <string.h>
  
#define STUDENT_NUM (5)
 
typedef struct{
  char name[256];    //  学生の名前
  int id;        //  学生番号
  int sex;       //  性別(性別 0:男 1:女)
  int grade;    //  学年
}student_data;
 
int main(void){
  student_data data[STUDENT_NUM];
    int i;
    //  名前
    char name[][256] = { "青木一", "遠藤京子", "加藤悟", "佐々木八重子", "田中徹"};
    //  学生番号
    int id[] = { 1001, 1002, 1003, 1004, 1005 };
    //  性別の設定
    int sex[] = { 0 ,1, 0, 1, 0};
    //  学年
    int grade[] = { 1, 1 ,1, 1, 1};
    // データの設定
    for(i=0; i<STUDENT_NUM; i++) {
      strcpy(data[i].name, name[i]);
      data[i].id = id[i];
      data[i].sex = sex[i];
      data[i].grade = grade[i];
    }

    //  学生のデータの表示
    for(i = 0; i < STUDENT_NUM; i++){
        printf("名前:%s\n", data[i].name);
        printf("性別:");
        if(data[i].sex == 0) {
            printf("男\n");
        } else {
            printf("女\n");
        }
        printf("学生番号:%d\n", data[i].id);
        printf("学年:%d\n\n",data[i].grade);
    }

    return 0;
}