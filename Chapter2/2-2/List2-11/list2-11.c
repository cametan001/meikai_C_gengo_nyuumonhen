/* 三つの整数値を読み込んで合計値と平均値を表示 */

#include <stdio.h>

int main(void)
{
  int na, nb, nc;
  int sum;			/* 合計値 */
  double ave;			/* 平均値 */

  puts("三つの整数を入力してください。");
  printf("整数A:"); scanf("%d", &na);
  printf("整数B:"); scanf("%d", &nb);
  printf("整数C:"); scanf("%d", &nc);

  sum = na + nb + nc;
  ave = (double)sum / 3;	/* キャスト */

  printf("それらの合計は%5dです。\n", sum); /* 99999 */
  printf("それらの平均は%5.1fです。\n", ave); /* 999.9 */

  return (0);
}
