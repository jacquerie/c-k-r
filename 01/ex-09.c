#include <stdio.h>

#define TRUE  1
#define FALSE 0

main()
{
  char space_seen = FALSE;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (!space_seen) {
        space_seen = TRUE;
        putchar(c);
      }
    } else {
      space_seen = FALSE;
      putchar(c);
    }
  }
}
