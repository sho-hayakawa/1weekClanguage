// probex6-5(難易度：★★)
// probex6-4の表をもとに、学生の科目ごとの得点の合計点を求め、 以下のように合計点を画面表示するプログラムを作成しなさい。データを格納する構造体も、probex6-4の、student_dataを用いること。また、合計を計算する関数として、以下のものを作成し、利用すること。

// 合計の計算をする関数
// 関数名	                      処理内容
// int sum(student_type* data)	ポインタとして与えられた、dataの各教科の合計点数を戻り値として返す。

// 期待される実行結果
// 番号      国語    数学    理科    社会    英語    合計
// 1001      82      43      53      84      45      307
// 1002      92      83      88      79      99      441
// 1003      43      32      53      45      66      239
// 1004      72      73      71      68      59      343
// 1005      99      72      82      91      94      438

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
int sum(student_data*);
void showData(student_data*);

int main(void) {
  student_data data[NUMSTUDENT];
  int id[] = {1001, 1002, 1003, 1004, 1005};  //  学生番号
  int kokugo[] = {82, 92, 43, 72, 99};          //  国語の点数
  int sansu[] = {43, 83, 32, 73, 72};           //  算数の点数
  int rika[] = {53, 88, 53, 71, 82};            //  理科の点数
  int shakai[] = {84, 79, 45, 68, 91};          //  社会の点数
  int eigo[] = {45, 99, 66, 59, 94};            //  英語の点数
  // データの設定
  for(int i=0; i<NUMSTUDENT; i++) {
    setData(&data[i], id[i], kokugo[i], sansu[i], rika[i], shakai[i], eigo[i]);
  }
  // 合計点を計算し、データを表示
  showData(data);
}

void setData(student_data* data, int id, int kokugo, int sansu, int rika, int shakai, int eigo) {
  data->id = id;
  data->kokugo = kokugo;
  data->sansu = sansu;
  data->rika = rika;
  data->shakai = shakai;
  data->eigo = eigo;
}

void showData(student_data* data) {
  printf("番号\t国語\t算数\t理科\t社会\t英語\t合計\n");
  for(int i=0; i<NUMSTUDENT; i++) {
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", data->id, data->kokugo, data->sansu, data->rika, data->shakai, data->eigo, sum(data));
    data++;
  }
}

int sum(student_data* data) {
  int sum = 0;
  sum += data->kokugo;
  sum += data->sansu;
  sum += data->rika;
  sum += data->shakai;
  sum += data->eigo;
  return sum;
}