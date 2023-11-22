#include <iostream>
using namespace std;

int main() {
  int cap, input, int1=0, int2=0, int3=0, int4=0;
  cout << "Type Cap Number: ", cin >> cap;
  for (int i = 0; i < cap; i++){
    cout << "Type Number: ", cin >> input;
    if (input >= 0 && input <= 25){
      int1++;
    } else if (input >= 26 && input <= 50){
      int2++;
    } else if (input >= 51 && input <= 75){
      int3++;
    } else if (input >= 76 && input <= 10){
      int4++;
    }
  }
  cout << "[0-25]   : " << int1 << endl;
  cout << "[26-50]  : " << int2 << endl;
  cout << "[51-75]  : " << int3 << endl;
  cout << "[76-100] : " << int4 << endl;
}
