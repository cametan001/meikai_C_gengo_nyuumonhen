#include <stdio.h>

int main(void)
{
  int ht;

  printf("身長を入力してください:"); scanf("%d", &ht);

  printf("標準体重は%.1fです。\n", (ht - 100) * 0.9);

  return (0);
}
