#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float addition(double *a, double *b, double *result)
{
  *result = *a + *b;
  return *result;
}

float subtraction(double *a, double *b, double *result)
{
  *result = *a - *b;
  return *result;
}

float multiplication(double *a, double *b, double *result)
{
  *result = *a * *b;
  return *result;
}
float division(double *a, double *b, double *result)
{
  *result = *a / *b;
  return *result;
}

int main()
{
  bool state = true;
  while (state)
  {
    int operation;
    double a;
    // B is set to 1 instead to avoid division by zero even if the division function hasn't been called yet
    double b = 1;
    double result;

    cout << "Enter the number corresponding the chosen operation to be performed. Be mindful of the order of the input variables for subtraction and division" << endl
         << "[1] Addition       | result=a+b " << endl
         << "[2] Subtraction    | result=a-b " << endl
         << "[3] Multiplication | result=a*b " << endl
         << "[4] Division       | result=a/b " << endl;

    cin >> operation;
    cout << "Enter the first value (a): ";
    cin >> a;
    cout << "Enter the second value (b): ";
    cin >> b;

    switch (operation)
    {
    case 1:
      addition(&a, &b, &result);
      cout << result << endl;
      break;

    case 2:
      subtraction(&a, &b, &result);
      cout << result << endl;
      break;

    case 3:
      multiplication(&a, &b, &result);
      cout << result << endl;
      break;

    case 4:
      division(&a, &b, &result);
      cout << result << endl;
      break;

    default:
      cout << "Something went wrong!";
      break;
    }
  }
}