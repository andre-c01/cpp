#include <iostream>
using namespace std;

int main() {
  int age;
  cout << "Enter Age: ";
  cin >> age;
  if ( (age >= 5) && (age <= 7) ) {
    cout << "Infantil A" << endl;
  } else if ( (age >= 8) && (age <= 10) ) {
    cout << "Infantil B" << endl;
  } else if ( (age >= 11) && (age <= 13) ) {
    cout << "Juvenil A" << endl;
  } else if ( (age >= 14) && (age <= 17) ) {
    cout << "Juvenil B" << endl;
  } else if (age >= 18) {
    cout << "Adulto" << endl;
  } else {
    cout << "Nao pertence a uma classe" << endl;
  }
}
