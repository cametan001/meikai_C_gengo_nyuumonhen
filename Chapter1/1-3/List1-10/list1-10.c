/* 読み込んだ整数の10倍の値を表示 */

#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください。:");
  scanf("%d", &no);

  printf("その数の10倍は%dです。\n", 10 * no);

  return (0);
}
