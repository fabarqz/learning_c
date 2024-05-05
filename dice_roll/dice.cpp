#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <random>

using std::cin;
using std::cout;
using std::endl;

using std::default_random_engine;
using std::random_device;

using std::vector;

vector<int> vectorOut(vector<int> a)
{
  int vector_size = a.size();
  cout << "{";

  for (int i = 0; i < vector_size; i++)
  {
    if (i != vector_size - 1)
    {
      cout << a[i] << ", ";
    }
    else
    {
      cout << a[i];
    }
  }
  cout << "}" << endl;
}

int roll(int dice_side)
{
  int randomNumber = rand();
  int result = (randomNumber % dice_side) + 1;

  return result;
}

int roll_b(int dice_side)
{
  static default_random_engine generator(random_device{}());
  std::uniform_int_distribution<int> distribution(1, dice_side);

  return distribution(generator);
}

int main()
{
  srand(static_cast<unsigned int>(time(NULL)));

  int dice_side = 20;
  int number_of_dice = 5;
  vector<int> result_array;

  for (int i = 0; i < number_of_dice; i++)
  {

    int roll_result = roll(dice_side);
    result_array.push_back(roll_result);
  }

  cout << "The result of rolling " << number_of_dice << " " << dice_side << "-sided dice is as follows: ";
  vectorOut(result_array);

  return 0;
}