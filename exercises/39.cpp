#include <iostream>
using namespace std;

int main() {
  int max = 0, sum = 0;
  cout << "Type Cap Number: ", cin >> max;
  for (int i = 1; i <= max; i++) sum = sum + i;
  cout << "Sum: " << sum << endl;
}
