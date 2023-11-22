#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums;
  int uinput;
  int a = 0;

  for (int i = 0; i <= 15; i++) {
    cout << "Input your height in cm" << endl;
    cin >> uinput;
    nums.push_back(uinput);
  }

  cout << "Min Height = " << *min_element(nums.begin(), nums.end()) << endl;
  cout << "Max Height = " << *max_element(nums.begin(), nums.end()) << endl;
}
