// greatness.c -- Greatest program of all time.
// Part of SillyTestRepo.

#include <stdio.h>

int
main (int argc, char* argv[])
{
  printf("the greatest program of all time has received %d arguments:\n", argc);
  for (int i = 0;  i < argc;  ++i)
  {
    printf("  %d: %s\n", i, argv[i]);
  }

  return 0;
}
