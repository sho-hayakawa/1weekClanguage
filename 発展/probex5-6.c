// probex5-6.(難易度：★★)
// probex5-5.と同じ結果が得られるものを、strcmp()関数を用いずに作りなさい。

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char* s1 = NULL;
  char* s2 = NULL;
  s1 = (char*)malloc(sizeof(char)*256);
  s2 = (char*)malloc(sizeof(char)*256);
  printf("文字列1：");
  scanf("%s", s1);
  printf("文字列2：");
  scanf("%s", s2);
  int* hit = NULL;
  int* len = NULL;
  hit = (int*)malloc(sizeof(int));
  *hit = 0;
  len = (int*)malloc(sizeof(int));
  for(int i=0; i<256; i++) {
    if(s1[i] =='\0') {
      *len = i;
      break;
    }
    if(s1[i] == s2[i]) {
      (*hit)++;
    }
  }
  free(s1);
  free(s2);
  if(*hit == *len) {
    printf("同じものです\n");
  } else {
    printf("異なるものです\n");
  }
  free(hit);
  free(len);

  return 0;
}