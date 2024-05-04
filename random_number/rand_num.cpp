#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

int randomize(int &a, int &b)
{
  int range = b - a + 1;

  int res = rand() % range + a;

  return res;
}

int main()
{
  int start;
  int end;
  int random_value;

  cout << "Enter the start number: ";
  cin >> start;

  cout << "Enter the end number: ";
  cin >> end;

  random_value = randomize(start, end);

  cout << "Your random number is: " << random_value << endl;

  return 0;
}