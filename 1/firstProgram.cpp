#include <iostream>

int main()
{
  int userValue { };
  std::cout << "Please enter an integer: ";
  std::cin >> userValue;
  int doubleUserValue { userValue * 2 };
  std::cout << "Double that number is: " << doubleUserValue << "\n";
  return 0;
}