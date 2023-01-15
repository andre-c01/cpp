#include <iostream>
using namespace std;

int main() {
  int ini_num;
  int end_num;

  cout << "Type the initial number: ";
  cin >> ini_num;
  cout << "Type the ending number: ";
  cin >> end_num;

  if (ini_num<end_num) {
    for (int i=ini_num ; i <= end_num ; i++) {
      cout << i << " ";
    }
    cout << endl;
  } else {
    cout << "End number must be higher the initial" << endl;
  }
}
