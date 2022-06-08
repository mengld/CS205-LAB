#include <iostream>

using std::cout;
using std::endl;

int main() {
  
  // 1. convert int to char
  char ch = 1111;
  cout << "[int]1111 -> [char]" << ch << endl;
  ch = 19190504;
  cout << "[int]19190504 -> [char]" << ch << endl;

  // 2. convert char to int
  int num = '中';
  cout << "[char]中 -> [int]" << num << endl;
  num = '华';
  cout << "[char]华 -> [int]" << num << endl;

  // 3. convert special char to int
  num = '\n';
  cout << "[char]\\n -> [int]" << num << endl;

  return 0;
}