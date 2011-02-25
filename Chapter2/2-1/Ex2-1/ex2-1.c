#include <stdio.h>

int main(void)
{
  int n1, n2;

  puts("二つの整数を入力してください。");
  printf("整数A:"); scanf("%d", &n1);
  printf("整数B:"); scanf("%d", &n2);

  printf("Aの値はBの値の%d%%です。\n", 100 * n1 / n2);

  return (0);
}
