#include <stdio.h>

main()
{
  printf("\\a: foo\abar\n");
  printf("\\b: foo\bbar\n");
  printf("\\f: foo\fbar\n");
  printf("\\n: foo\nbar\n");
  printf("\\r: foo\rbar\n");
  printf("\\t: foo\tbar\n");
  printf("\\v: foo\vbar\n");
  printf("\\': foo\'bar\n");
  printf("\\\\: foo\\bar\n");
  printf("\\040: foo\040bar\n");
}
