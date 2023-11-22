#include <iostream>
using namespace std;

int main() {
  int width, height, length;
  cout << "Type width: " , cin >> width;
  cout << "Type height: " , cin >> height;
  cout << "Type length: " , cin >> length;
  cout << "Volume is = " << (width * height * length) << " cm²" << endl;
}
