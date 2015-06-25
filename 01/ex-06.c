#include <stdio.h>

main()
{
  int c;

  printf("Press ENTER");
  c = getchar() != EOF;
  printf("%d\n", c);

  printf("Press CTRL+D\n");
  c = getchar() != EOF;
  printf("%d\n", c);
}
