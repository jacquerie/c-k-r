#include <stdio.h>

main ()
{
  int c, i, j, length;
  int histogram[16];

  for (i = 0; i < 16; i++)
    histogram[i] = 0;

  length = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      histogram[length]++;
      length = 0;
    } else {
      length++;
    }
  }

  for (i = 0; i < 16; i++) {
    printf("%2d: ", i);

    for (j = 0; j < histogram[i]; j++)
      printf("#");

    printf("\n");
  }
}
