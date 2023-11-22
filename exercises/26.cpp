#include <iostream>
using namespace std;

int main() {
  for (int i = 1000; i <= 1999; i++) {
    if ( i % 11 == 5) {
      cout << "Remainder of " << i << " divided by 11 is 5" << endl;
    }
  }
}
