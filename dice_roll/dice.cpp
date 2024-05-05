#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

int roll(int dice_side)
{
  srand(static_cast<unsigned int>(time(NULL)));
  int randomNumber = rand();
  int result = (randomNumber % dice_side) + 1;

  return result;
}

int main()
{

  int dice_side = 6;
  int number_of_dice = 3;

  int roll_dice = roll(dice_side);

  cout << "The result of rolling a " << dice_side << "-sided die is " << roll_dice << endl;

  for (int i = 0; i < dice_side; i++)
  {
  }
  return 0;
}