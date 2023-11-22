#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums;
  int input, b=0;

  for (int i = 0; i < 10; i++) {
    cout << "Insert Number: ";
    cin>>input;
    nums.push_back(input);
    if (input >= 10 && input <= 20)
      b++;
  }
  cout << b << " Numbers are between [10,20]" << endl;
  cout << 10 - b << " Numbers are not between [10,20]" << endl;
}
