#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter Number: ";
  cin >> num;
  if ((num%2) == 0) {
    cout << "Number is pair" << endl;
  } else {
    cout << "Number is odd" << endl;
  }
}
