#include <stdio.h>

int main()
{
  int fahrenheit;
  int celsius;
  int lower = 0;
  int upper = 500;
  int step = 20;

  printf("| F (°F)\t| C(°C)\t|\n");
  fahrenheit = lower;
  while (fahrenheit <= upper)
  {
    celsius = 5 * (fahrenheit - 32) / 9;
    printf("|\x20\x20%d(°F)\t|\x20\x20%d(°F)\t|\n", fahrenheit, celsius);

    fahrenheit = fahrenheit + step;
  }
  return 0;
}