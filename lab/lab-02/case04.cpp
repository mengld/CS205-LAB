// output: 
// sum: 1
// sum equals to 1? 0
#include <iostream>

using std::cout;
using std::endl;

int main() {
  float a = 0.1;
  float sum = a+a+a+a+a+a+a+a+a+a;

  cout << "sum: " << sum << endl;
  cout << "sum equals to 1? " << (sum == 1.0) << endl;
  return 0;
}