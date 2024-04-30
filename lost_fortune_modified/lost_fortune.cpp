#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int getSurvivors(int &adventurers, int &killed)
{
  int survivors = adventurers - killed;
  return survivors;
}

int getGoldRemainder(int gold_pieces, int &survivors)
{
  int remainder = (gold_pieces % survivors);
  return remainder;
}
int main()
{
  const int GOLD_PIECES = 900;
  int adventurers;
  int killed;
  int survivors;
  int gold_remainder;
  string character_name;

  cout << "Welcome to Lost Fortunes" << endl
       << endl;
  cout << "Kindly fill in the requested information for your personalized adventure" << endl;

  cout << "Enter a number: ";
  cin >> adventurers;

  cout << "Enter a number, smaller than the first one: ";
  cin >> killed;

  survivors = getSurvivors(adventurers, killed);
  gold_remainder = getGoldRemainder(GOLD_PIECES, survivors);

  cout << "Enter your name: ";
  getline(cin >> std::ws, character_name);

  cout << "\nA brave group of " << adventurers << " set out on a quest ";
  cout << "- in search of the lost treasure of the Ancient Dwarves. ";
  cout << "The group was led by that legendary rogue, " << character_name << endl;
  cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
  cout << "All fought bravely under the command of " << character_name;
  cout << ", and the ogres were defeated, but at a cost. ";
  cout << "Of the adventurers, " << killed << " were vanquished, ";
  cout << "leaving just " << survivors << " in the group.\n";

  cout << "\nThe party was about to give up all hope. ";
  cout << "But while laying the deceased to rest, ";
  cout << "they stumbled upon the buried fortune. ";
  cout << "So the adventurers split " << GOLD_PIECES << " gold pieces. ";
  cout << character_name << " held on to the extra " << gold_remainder;
  cout << " pieces to keep things fair of course.\n";
  return 0;
}