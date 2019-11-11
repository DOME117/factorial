#include <iostream>
using namespace std;

int main()
{
  int num;
  int factorial;

  cout << "Enter a number: \n";
  cin >> num;

  factorial = num;

  for (int i = factorial - 1; i > 1; i--)
  {
    factorial = factorial * i;
  }
  cout << "The factorial of " << num << " is " << factorial << ".";
  return 0;
}
