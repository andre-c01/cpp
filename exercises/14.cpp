#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter Number: ";
  cin >> num;
  if (num >= 0) {
    cout << "Number positive" << endl;
  } else {
    cout << "Number is negative" << endl;
  }
}
