#include <iostream>
using namespace std;

int main() {
  int e=0,o=0,input;
  for (int i = 0; i < 10; i++) {
    cout << "Type a number: " << endl;
    cin >> input;
    if (input % 2) {o++;} else {e++;}
  }
  cout << o << " are odd" << endl << e << " are even" << endl;
}
