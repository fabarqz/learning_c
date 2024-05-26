#include <stdio.h>

float convertCtoF(float inCelsius);
float convertFtoC(float inFahrenheit);
float convertCtoK(float inCelsius);
float convertKtoC(float inKelvin);
float convertFtoK(float inFahrenheit);
float convertKtoF(float inKelvin);

int main()
{
  float inputTemperature;
  char inputUnit;
  char targetUnit;

  printf("This program handles conversion of temperature between the following units: C-Celsius, F-Fahrenheit, K-Kelvin\n");
  printf("The valid format for the input should be <input temperature><original unit:C,F,K><desired conversion:C,F,K>\n");
  printf("Example:50CF means convert 50 degrees Celsius into degrees Fahrenheit\n");

  printf("Enter your input for temperature conversion: ");
  scanf("%f %c %c", &inputTemperature, &inputUnit, &targetUnit);

  if (inputUnit == 'C' && targetUnit == 'F')
  {
    float result = convertCtoF(inputTemperature);
    printf("%.3f deg Celsius --> %.3f deg Fahrenheit", inputTemperature, result);
  }
  else if (inputUnit == 'F' && targetUnit == 'C')
  {
    float result = convertFtoC(inputTemperature);
    printf("%.3f deg Fahrenheit --> %.3f deg Celsius", inputTemperature, result);
  }
  else if (inputUnit == 'C' && targetUnit == 'K')
  {
    float result = convertCtoK(inputTemperature);
    printf("%.3f deg Celsius --> %.3f deg Kelvin", inputTemperature, result);
  }
  else
  {
    printf("something went wrong");
  }
  return 0;
}

float convertCtoF(float inCelsius)
{
  return inCelsius * (9.0 / 5.0) + 32.0;
}

float convertFtoC(float inFahrenheit)
{
  return (inFahrenheit - 32.0) * (5.0 / 9.0);
}

float convertCtoK(float inCelsius)
{
  return inCelsius + 273.15;
}

float convertKtoC(float inKelvin)
{
  return inKelvin - 273.15;
}

float convertFtoK(float inFahrenheit)
{
  return (inFahrenheit - 32.0) * (5.0 / 9.0) + 273.15;
}

float convertKtoF(float inKelvin)
{
  return (inKelvin - 273.15) * (9.0 / 5.0) + 32.0;
}
