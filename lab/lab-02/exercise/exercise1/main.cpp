#include <iostream>

#include "mul.hpp"
using namespace std;
int main() {
  int a, b;
  int result;
  cout << "Pick two integers:" << endl;
  cin >> a;
  cin >> b;
  result = mul(a, b);
  cout << "The result is " << result << endl;
  return 0;
}
