#include <iostream>
using namespace std;

int main() {
  float length;
  float width;
  float p_;
  cout << "Type Length: ";
  cin >> length;
  cout << "Type Your Width: ";
  cin >> width;
  p_ = 2*(length+width);
  cout << "The Perimeter is: " << p_ << endl;
}
