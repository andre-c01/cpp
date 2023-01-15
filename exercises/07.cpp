#include <iostream>
using namespace std;

int main() {
  float bill;
  float money_given;
  float change;
  cout << "Type Cost: ";
  cin >> bill;
  cout << "Type Value Given: ";
  cin >> money_given;
  change = money_given - bill;
  if (money_given > bill) {
    cout << "Your Change is: " << change << "€" << endl;
  } else {
    cout << "You still need to pay: " << bill-money_given << "€\n";
  }
}
