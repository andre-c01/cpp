#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums;
  int uinput;
  int a = 0;

  do {
    cout << "Input a number between 0 and 100 (0 = exit)" << endl;
    cin >> uinput;
    if (uinput > 0 && uinput < 100) {
      nums.push_back(uinput);
    } else if (uinput == 0) {
      cout << "Exit" << endl;
    } else {
      cout << "Number must be between 0 and 100" << endl;
    }
  } while(uinput != 0);

  for (int i = 0; i < size(nums); i++) {
    a = a + nums[i];
  }
  a = a / size(nums);

  cout << "Min Element = " << *min_element(nums.begin(), nums.end()) << endl;
  cout << "Max Element = " << *max_element(nums.begin(), nums.end()) << endl;
  cout << "Average Element = " << a << endl;
}
