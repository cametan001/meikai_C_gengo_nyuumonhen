/* 読み込んだ整数値の符号を反転した値を表示 */

#include<stdio.h>

int main(void)
{
  int num;

  printf("整数を入力してください:");
  scanf("%d", &num);

  printf("符号を反転した値は%dです。\n", -num);

  return (0);
}
