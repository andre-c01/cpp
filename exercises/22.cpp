#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
  const int pass = 12345;
  int input;
  bool match;

  do {
    cout << "Type pass: ";
    cin >> input;
    if (input==pass) {
      cout << "Corret" << endl;
      match=true;
    } else {
      cout << "Wrong" << endl;
      sleep(2);
      for (int i = 0; i < 2; i++) {
        cout << "\033[1F\33[K";
      }
    }
  } while(match!=true);
}
