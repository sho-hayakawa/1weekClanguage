// probex4-4(難易度：★)
// 以下のプログラムを実行すると
// #include <stdio.h>
// #include <malloc.h>
// void main(){
//     //  数値配列代入用のポインタ変数
//     double *a = NULL;
//     int i;
//     //  メモリの生成
//     a = (double*)malloc(sizeof(double)*3);
//     for(i = 0; i < 3; i++){
//         a[i] = 0.1 * i;
//     }
//     //  結果の表示
//     for(i = 0; i < 3; i++){
//         printf("%f ",a[i]);
//     }
//     printf("¥n");
//     //  メモリの開放
//     free(a);
// }
// 次のような実行結果になる。

// 実行結果
// 0.000000 0.100000 0.200000
// 期待される実行結果
// 0.000000 0.100000 0.200000 0.300003 0.400000 0.500000

#include <stdio.h>
#include <stdlib.h>
int main(void){
    //  数値配列代入用のポインタ変数
    double *a = NULL;
    int i;
    //  メモリの生成
    a = (double*)malloc(sizeof(double)*6);
    for(i = 0; i < 6; i++){
        a[i] = 0.1 * i;
    }
    //  結果の表示
    for(i = 0; i < 6; i++){
        printf("%f ",a[i]);
    }
    printf("\n");
    //  メモリの開放
    free(a);

    return 0;
}