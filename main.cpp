#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

int main() {
  struct utsname name;
  if (uname(&name))
    exit(-1);
  printf("Hello from ... Docker! Your computer's OS is %s@%s\n", name.sysname,
         name.release);
  return 0;
}
