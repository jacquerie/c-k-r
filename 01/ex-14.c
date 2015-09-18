#include <stdio.h>

main ()
{
  int c, i, j, length, n_chars = '~' - ' ' + 1;
  int counts[n_chars];

  for (i = 0; i < n_chars; i++)
    counts[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= ' ' && c <= '~')
      counts[c - ' ']++;

  for (i = 0; i < n_chars; i++) {
    printf("%c: ", i + ' ');

    for (j = 0; j < counts[i]; j++)
      printf("#");

    printf("\n");
  }
}
