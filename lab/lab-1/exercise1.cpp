#include <stdio.h>

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float a = 0.1, b = 0.2, c = 0.3;
  printf("%.2f\n%.2f\n%.2f\n", a, b, c);
  cout << setiosflags(ios::fixed) << setprecision(2) << a << endl;
  cout << a << endl << b << endl << c << endl;
  return 0;
}