// five() is a function that returns the value 5
int five()
{
  return 5;
}

int main()
{
  int a { 2 };
  int b { 2 + 3 };
  int c { (2*3) + 4 };
  int d { b };
  int e { five() };
  int f = five();

  return 0;
}