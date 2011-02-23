/* 読み込んだ整数の値を表示して確認 */

#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください:");
  scanf("%d", &no);		/* 整数値を読み込む */

  printf("あなたは%dと入力しましたね。\n", no);

  return (0);
}
