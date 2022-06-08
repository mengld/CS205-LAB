#include <iostream>

using std::cout;
using std::endl;

int main() {
  
  unsigned int num = -1;
  int max = num >> 1;
  int min = max + 1;
  cout << min << endl;
  cout << max << endl;
  return 0;
}