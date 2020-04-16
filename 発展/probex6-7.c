// probex6-7(難易度：★★)
// 以下の表は、ある家庭の家計簿である。この表を基に、構造体を用いて、以下の計算を行いなさい。

// 月	  住居費  食費    被服費  教養費  医療費  その他
// 1月	86000   47000	  3000	  20000   9500	  66000
// 2月	86000	  43000	  30000	  15000   0	      43000
// 3月	86000	  38600	  5000	  65000   500	    76000
// 4月	86000	  39500	  0	      12000   0	      75000
// 5月	86000	  38600	  28000   7000    5200    63500
// 6月	86000	  37500	  3000    5000    0	      67000
// 期待される実行結果
// (1)構造体kakeiを定義し、月、住居費、食費、被服費、教養費、医療費、その他の金額を代入できるようにしなさい。
// (2) 表のデータを、kakei構造体の配列を作成し、初期値として入れなさい。
// (3) kakeiのポインタを引数として、費用の合計を求める関数、goukeiを作成し、各月の費用の合計を出力しなさい。
// (4) 医療費の最も多い月を探し出し、表示しなさい。
// (5) 食費の最も多い月と、その金額を表示しなさい。

// 各月の出費の合計
// ---------------------
// 1月 231500
// 2月 217000
// 3月 271100
// 4月 212500
// 5月 228300
// 6月 198500

// 医療費の最も多い月：１月
// 食費の最も多い月と金額：１月、47000

#include <stdio.h>

typedef struct {
    int month;      //  月
    int house;      //  住居費
    int food;       //  食費
    int clothes;    //  被服費
    int education;  //  教養費
    int medical;    //  医療費
    int other;      //  その他
} kakei;

#define MONTHS 6

void setData(kakei*, int, int, int, int, int, int, int);
int goukei(kakei*);
void showData(kakei*);
void showGoukei(kakei*);

int main(void) {
  kakei data[MONTHS];                             //  
  int month[] = {1, 2, 3, 4, 5, 6};    //  学生番号
  int house[] = {86000, 86000, 86000, 86000, 86000, 86000};          //  国語の点数
  int food[] = {47000, 43000, 38600, 39500, 38600, 37500};           //  算数の点数
  int clothes[] = {3000, 30000, 5000, 0, 28000, 3000};            //  理科の点数
  int education[] = {20000, 15000, 65000, 12000, 7000, 5000};          //  社会の点数
  int medical[] = {9500, 0, 500, 0, 5200, 0};           //  英語の点数
  int other[] = {66000, 43000, 76000, 75000, 63500, 67000};           //  英語の点数
  //  データの設定
  for(int i=0; i<MONTHS; i++) {
    setData(&data[i], month[i], house[i], food[i], clothes[i], education[i], medical[i], other[i]);
  }
  //  データを表示
  showData(data);
  //  月ごとの合計を表示
  showGoukei(data);

  //  医療費が最も多い月を表示
  int max = 0, maxmonth = 0;
  for(int i=0; i<MONTHS; i++) {
    if(data[i].medical > max) {
      max = data[i].medical;
      maxmonth = i+1;
    }
  }
  printf("\n医療費が最も多い月: %d月\n", maxmonth);

  //  食費の最も多い月と金額を表示
  max = 0;
  for(int i=0; i<MONTHS; i++) {
    if(data[i].food > max) {
      max = data[i].food;
      maxmonth = i+1;
    }
  }
  printf("食費の最も多い月と金額: %d月  %d\n", maxmonth, max);
}

void setData(kakei* data, int month, int house, int food, int clothes, int education, int medical, int other) {
  data->month = month;
  data->house = house;
  data->food = food;
  data->clothes = clothes;
  data->education = education;
  data->medical = medical;
  data->other = other;
}

void showData(kakei* data) {
  printf("月\t住居費\t食費\t被服費\t教養費\t医療費\tその他\n");
  for(int i=0; i<MONTHS; i++) {
    printf("%d月\t%d\t%d\t%d\t%d\t%d\t%d\n", data->month, data->house, data->food, data->clothes, data->education, data->medical, data->other);
    data++;
  }
}

int goukei(kakei* data) {
  int sum = 0;
  sum += data->house;
  sum += data->food;
  sum += data->clothes;
  sum += data->education;
  sum += data->medical;
  sum += data->other;
  return sum;
}

void showGoukei(kakei* data) {
  printf("\n各月の出費の合計\n---------------------\n");
  for(int i=0; i<MONTHS; i++) {
    printf("%d月  %d\n", data->month, goukei(data));
    data++;
  }
}