#include <stdio.h>

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit\tCelsius\n----------\t-------\n");

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%10.0f\t%7.1f\n", fahr, celsius);

    fahr = fahr + step;
  }
}
