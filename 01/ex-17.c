#include <stdio.h>
#define MAXLINE 1000

int getline_ (char line[], int maxline);

int length (char s[]);

void reverse (char s[]);

int main ()
{
  char line[MAXLINE];

  while (getline_(line, MAXLINE) > 0) {
    reverse(line);
    printf("%s\n", line);
  }

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

int length (char s[]) {
  int result;

  result = 0;
  while (s[result] != '\0')
    result++;

  return result;
}

void reverse (char s[])
{
  char tmp;
  int i, l;

  l = length(s);
  for (i = 0; i <= l/2; i++) {
    tmp = s[i];
    s[i] = s[l-i-1];
    s[l-i-1] = tmp;
  }
}
