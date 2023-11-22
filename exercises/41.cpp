#include <iostream>
using namespace std;

int main() {
  int cap, input, sum=0, overage=0;
  cout << "Type Number of People: ", cin >> cap;
  for (int i = 0; i < cap; i++){
    cout << "Type Number: ", cin >> input;
    if (input >= 18){
      overage++;
      sum = sum + input;}}
  cout << overage << " are over 18" << endl;
  cout << (sum / cap) << " is the average" << endl;
}
