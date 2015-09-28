#include <stdio.h>
#define MAXLINE 1000

int getline_ (char line[], int maxline);

int trim (char line[], int maxline);

int main ()
{
  char line[MAXLINE];
  int i;

  while (getline_(line, MAXLINE) > 0)
    if (trim(line, MAXLINE) != -1)
      printf("%s\n", line);

  return 0;
}

int getline_ (char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;
  s[i] = '\0';

  return i;
}

int trim (char s[], int lim)
{
  int i, last;

  last = -1;
  for (i = 0; i < lim-1 && s[i] != '\0'; i++)
    if (!(s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
      last = i;

  s[last+1] = '\0';

  return last;
}
