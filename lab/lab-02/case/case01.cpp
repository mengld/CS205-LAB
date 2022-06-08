// output：1234567890 + 1234567890 = -1825831516
#include <iostream>

using std::cout;
using std::endl;

int main() {
  int a = 1234567890;
  int b = 1234567890;
  int sum = a + b;
  cout << a << " + " << b << " = " << sum << endl;
  return 0;
}