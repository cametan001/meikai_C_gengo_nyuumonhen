/* 二つの整数値を読み込んで平均値を実数値で表示 (キャスト) */

#include <stdio.h>

int main(void)
{
  int na, nb;

  puts("二つの整数を入力してください。");
  printf("整数A:"); scanf("%d", &na);
  printf("整数B:"); scanf("%d", &nb);

  printf("それらの平均は%fです。\n", (double)(na + nb) / 2); /* キャスト */

  return (0);
}
