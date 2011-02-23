#include <stdio.h>

int main(void)
{
  int n;

  printf("整数を入力してください:");
  scanf("%d", &n);

  printf("その数に10を加えると%dです。\n", n + 10);

  return (0);
}
