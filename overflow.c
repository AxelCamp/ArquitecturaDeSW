#include <stdio.h>
#include <string.h>

int main(void)
{
  char buff[16];
  int pass = 0;

  printf("[sudo] password for user: ");
  gets(buff);
  if (strncmp(buff, "<censored>", 16) == 0) {
	pass = 1;
  }

  if (pass) {
	printf("[root@localhost ~]# \n");
  } else {
	printf("sudo: 1 incorrect password attempt\n");
  }
}
