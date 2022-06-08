// output: 1.23457e+06 + 1 = 1.23457e+06
#include <iostream>

using std::cout;
using std::endl;

int main() {
  float a = 1234567.0;
  float b = 1.0;
  float sum = a + b;
  cout << a << " + " << b << " = " << sum << endl;
  return 0;
}