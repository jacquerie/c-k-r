#include <stdio.h>

main()
{
  int c;
  long n_spaces, n_tabs, n_lines;

  n_spaces = n_tabs = n_lines = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      n_spaces++;
    if (c == '\t')
      n_tabs++;
    if (c == '\n')
      n_lines++;
  }

  printf("Spaces: %ld\nTabs: %ld\nLines: %ld\n", n_spaces, n_tabs, n_lines);
}
