// probex6-4(難易度：★★)
// 以下の表は、あるクラスのテストの成績を示す票である。この生徒情報を構造体として作成し、それぞれの科目の平均点を構造体のポインタを用いて求めなさい。

// 学生番号	国語	算数	理科	社会	英語
// 1001	82	43	53	84	45
// 1002	92	83	88	79	99
// 1003	43	32	53	45	66
// 1004	72	73	71	68	59
// 1005	99	72	82	91	94
// この時、以下の構造体を作成し、利用すること。

// student_data:学生の番号と、点数のデータを保存する構造体
// typedef struct{
//     int id;         //  学生番号
//     int kokugo;     //  国語の点数
//     int sansu;      //  算数の点数
//     int rika;       //  理科の点数
//     int shakai;     //  社会の点数
//     int eigo;       //  英語の点数
// }student_data;
// 期待される実行結果
// 国語 平均 = 77.60
// 算数 平均 = 60.60
// 理科 平均 = 69.40
// 社会 平均 = 73.40
// 英語 平均 = 72.80

#include <stdio.h>

typedef struct {
    int id;         //  学生番号
    int kokugo;     //  国語の点数
    int sansu;      //  算数の点数
    int rika;       //  理科の点数
    int shakai;     //  社会の点数
    int eigo;       //  英語の点数
} student_data;

#define NUMSTUDENT  5

void setData(student_data*, int, int, int, int, int, int);
void showAvg(student_data*);

int main(void) {
  student_data data[NUMSTUDENT];
  int id[] = { 1001, 1002, 1003, 1004, 1005 };  //  学生番号
  int kokugo[] = {82, 92, 43, 72, 99};          //  国語の点数
  int sansu[] = {43, 83, 32, 73, 72};           //  算数の点数
  int rika[] = {53, 88, 53, 71, 82};            //  理科の点数
  int shakai[] = {84, 79, 45, 68, 91};          //  社会の点数
  int eigo[] = {45, 99, 66, 59, 94};            //  英語の点数
  // データの設定
  for(int i=0; i<NUMSTUDENT; i++) {
    setData(&data[i], id[i], kokugo[i], sansu[i], rika[i], shakai[i], eigo[i]);
  }
  // 教科ごとの平均を表示
  showAvg(data);
}

void setData(student_data* data, int id, int kokugo, int sansu, int rika, int shakai, int eigo) {
  data->id = id;
  data->kokugo = kokugo;
  data->sansu = sansu;
  data->rika = rika;
  data->shakai = shakai;
  data->eigo = eigo;
}

void showAvg(student_data* data) {
  float kokugo = 0;     //  国語の点数
  float sansu = 0;      //  算数の点数
  float rika = 0;       //  理科の点数
  float shakai = 0;     //  社会の点数
  float eigo = 0;       //  英語の点数
  for(int i=0; i<NUMSTUDENT; i++) {
    kokugo += data->kokugo;
    sansu += data->sansu;
    rika += data->rika;
    shakai += data->shakai;
    eigo += data->eigo;
    data++;
  }

  printf("国語 平均 = %.2f\n", kokugo/NUMSTUDENT);
  printf("算数 平均 = %.2f\n", sansu/NUMSTUDENT);
  printf("理科 平均 = %.2f\n", rika/NUMSTUDENT);
  printf("社会 平均 = %.2f\n", shakai/NUMSTUDENT);
  printf("英語 平均 = %.2f\n", eigo/NUMSTUDENT);
}