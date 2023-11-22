#include <iostream>
using namespace std;

int main() {
  double games = 0, discount = 0;
  do {
    cout << "Discount: (" << discount << "%) " << ((50*games)*(discount/100)) << "€ | Total: " << (50*games)-((50*games)*(discount/100)) << "€" << endl;
    cout << "Type number of Games: " , cin >> games;
    cout << "\033[2F\033[0J";
    if (games >= 10 && games <= 19) {
      discount = 20;
    } else if (games >= 20 && games <= 49) {
      discount = 30;
    } else if (games >= 50 && games <= 99) {
      discount = 40;
    } else if (games >= 100) {
      discount = 50;
    }
  } while(true);
}
