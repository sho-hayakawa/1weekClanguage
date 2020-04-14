// probex4-3(難易度：★)
// 以下のプログラムは、ポインタ変数arrayに動的に配列を確保し、処理を行うプログラムである。コメントで示された部分①と②を、適切な処理に変えて、プログラムを完成させなさい。
// #include <stdio.h>
// #include <malloc.h>
// void main(){
//     //  数値配列代入用のポインタ変数
//     int *array = NULL;
//     int i;
//     //  ①長さ10の配列の生成(mallocを使用）
//     for(i = 0; i < 10; i++){
//         array[i] = i;   //  値の代入
//     }
//     //  値の表示
//     for(i = 0; i < 10; i++){
//         printf("%d ",array[i]); //  値の代入
//     }
//     printf("¥n");
//     //  ②生成したメモリの開放(free()を使用)
// }
// 期待される実行結果
// 0 1 2 3 4 5 6 7 8 9

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //  数値配列代入用のポインタ変数
    int *array = NULL;
    int i;
    //  ①長さ10の配列の生成(mallocを使用）
    array = (int*)malloc(sizeof(int)*10);
    for(i = 0; i < 10; i++){
        array[i] = i;   //  値の代入
    }
    //  値の表示
    for(i = 0; i < 10; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    //  ②生成したメモリの開放(free()を使用)
    free(array);

    return 0;
}