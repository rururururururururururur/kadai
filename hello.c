#include <stdio.h>

// ���O���󂯎��A���A��\������֐�
void say_hello(const char* name) {
  printf("Hello, %s!\n", name);
}

int main(void)
{
  say_hello("Git user");  // �����Ŗ��O��n��
  return 0;
}
