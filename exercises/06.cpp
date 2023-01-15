#include <iostream>
using namespace std;

int main() {
  float bill;
  float tip;
  cout << "Type Cost: ";
  cin >> bill;
  tip = bill*0.1;
  cout << "The tip will be: " << tip << "€" <<endl;
}
