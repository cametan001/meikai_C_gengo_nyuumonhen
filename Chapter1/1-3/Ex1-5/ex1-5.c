#include <stdio.h>

int main(void)
{
  int n;

  printf("整数を入力してください:");
  scanf("%d", &n);

  printf("その数から10を減じると%dです。\n", n - 10);

  return (0);
}
