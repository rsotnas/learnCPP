#include <iostream>

void doNothing(int&)
{

}

int main()
{

  int x;
  doNothing(x);
  std::cout << x << '\n';

  x = 5;

  std::cout << 'the end\n';

  return 0;
}
