#include <stdio.h>

float celsius_to_fahr (float celsius);

int main ()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius\tFahrenheit\n-------\t----------\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius_to_fahr(celsius);
    printf("%7.0f\t%10.0f\n", celsius, fahr);

    celsius = celsius + step;
  }

  return 0;
}

float celsius_to_fahr (float celsius) {
  return (9.0/5.0) * celsius + 32.0;
}
