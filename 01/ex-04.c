#include <stdio.h>

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius\tFahrenheit\n-------\t----------\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%7.0f\t%10.0f\n", celsius, fahr);

    celsius = celsius + step;
  }
}
