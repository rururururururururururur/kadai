#include <stdio.h>

// 名前を受け取り、挨拶を表示する関数
void say_hello(const char* name) {
  printf("Hello, %s!\n", name);
}

int main(void)
{
  say_hello("Git user");  // ここで名前を渡す
  return 0;
}
