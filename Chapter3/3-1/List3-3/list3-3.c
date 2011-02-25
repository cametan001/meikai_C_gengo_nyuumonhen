/* 読み込んだ整数は5で割り切れないか割り切れるか */

#include <stdio.h>

int main(void)
{
  int vx;

  printf("整数を入力してください:");
  scanf("%d", &vx);

  if (vx % 5)
    puts("その数は5で割りきれません。");
  else
    puts("その数は5で割り切れます。");

  return (0);
}
