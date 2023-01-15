#include <iostream>
using namespace std;

int main() {
  int num;

  cout << "Type number: ";
  cin >> num;

  if(num > 10) {
    for(int i=1;i<=num;i++) {
      cout << i << " ";
    }
    cout << endl;
  } else {
    cout << "Number must be higher then 10";
  }
}
