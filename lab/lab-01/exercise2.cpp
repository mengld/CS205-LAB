#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  for (vector<int> v{1, 2, 3}; auto& e : v) {
    cout << e << endl;
  }

  return 0;
}