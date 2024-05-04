#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;

int select(int choice)
{
  switch (choice)
  {
  case 1:
    cout << "Setting difficulty to Easy." << endl;
    break;
  case 2:
    cout << "Setting difficulty to Normal." << endl;
    break;
  case 3:
    cout << "Setting difficulty to Hard." << endl;
    break;
  case 4:
    cout << "Setting difficulty to Impossibru." << endl;
    break;
  case 5:
    cout << "You absolute madman." << endl;
    break;
  default:
    cout << "You made an illegel choice";
  }
}

bool isValidInput(int input)
{
  return (input >= 1 && input <= 5);
}
int main()
{
  int choice;
  cout << "Choose a difficulty level: " << endl;
  cout << "[1] Easy" << endl
       << "[2] Normal" << endl
       << "[3] Hard" << endl
       << "[4] Impossible" << endl
       << "[5] Asian" << endl;

  do
  {
    cout << " Enter your choice: ";
    if (cin >> choice && isValidInput(choice))
    {
      break;
    }
    else
    {
      cout << "Invalid input. Please enter a number between 1 and 5" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  } while (true);

  select(choice);

  return 0;
}