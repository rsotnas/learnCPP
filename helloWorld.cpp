#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "Hello, world!\n";
    std::cout << "x is " << x << '\n';

    std::cout << "Enter a number: ";
    int y{};
    std::cin >> y;

    std::cout << "You entered " << y << '\n';

    return 0;   
}