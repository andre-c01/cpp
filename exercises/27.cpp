#include <iostream>
using namespace std;

int main() {
  int i, r, b=0;
  for (int i = 0; i < 10; i++) {
    cout << "Insert Number: ";
    cin>>r;
    if (r >= 10 && r <= 20)
      b++;
  }
  cout << b << " Numbers are between [10,20]" << endl;
  cout << 10 - b << " Numbers are not between [10,20]" << endl;
}
