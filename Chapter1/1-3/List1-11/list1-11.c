/* 読み込んだ二つの整数値の和を表示 */

#include <stdio.h>

int main(void)
{
  int n1, n2;

  puts("二つの整数を入力してください。");
  printf("整数1:"); scanf("%d", &n1);
  printf("整数2:"); scanf("%d", &n2);

  printf("それらの和は%dです。\n", n1 + n2); /* 和を表示 */

  return (0);
}
