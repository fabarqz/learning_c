#include <iostream>
#include <string>
#include <vector>

std::vector<int> vectorOut(std::vector<int> &a)
{
  int vector_size = a.size();

  std::cout << "{";

  for (int i = 0; i < vector_size; i++)
  {
    if (i != vector_size - 1)
    {
      std::cout << a[i] << ", ";
    }
    else
    {
      std::cout << a[i];
    }
  }
  std::cout << "}" << std::endl;
};

int main()
{
  std::vector<int> test_vec = {0, 1, 2, 3, 4, 5, 6, 7};
  int size = test_vec.size();

  for (int i = 0; i < size; i++)
  {
    if (i != size - 1)
    {
      std::cout << test_vec[i] << ", ";
    }
    else
    {
      std::cout << test_vec[i] << std::endl;
    }
  }

  vectorOut(test_vec);

  return 0;
}