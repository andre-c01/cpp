#include <iostream>
using namespace std;

int main() {
  int books;
  int points = 0;
  do {
    cout << "Points: " << points << endl;
    cout << "Type number of books: " , cin >> books;
    cout << "\033[2F\033[0J";
    if (books == 0) {
      points = 0;
    } else if (books == 1) {
      points = 5;
    } else if (books == 2) {
      points = 15;
    } else if (books == 3) {
      points = 30;
    } else if (books >= 4) {
      points = 60;
    }
  } while(true);
}
