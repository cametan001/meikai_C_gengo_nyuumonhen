/* 二つの整数値を読み込んで商と剰余を表示 */

#include <stdio.h>

int main(void)
{
  int na, nb;

  puts("二つの整数を入力してください。");
  printf("整数A:"); scanf("%d", &na);
  printf("整数B:"); scanf("%d", &nb);

  printf("AをBで割ると%dあまり%dです。\n", na / nb, na % nb);

  return (0);
}
  
