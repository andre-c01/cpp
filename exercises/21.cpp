#include <iostream>
using namespace std;

int main() {
  int ini_num;
  int end_num;

  cout << "Type the initial number: ";
  cin >> ini_num;


  if (ini_num<100) {
    for (int i=ini_num ; i <= 100 ; i++) {
      cout << i << " ";
    }
    cout << endl;
  } else {
    cout << "Number must be lower then 100" << endl;
  }
}
