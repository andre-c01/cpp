#include <iostream>
using namespace std;

int main() {
  int input;
  cout << "Input Number: ", cin >> input;
  cout << "O numero é" ;
  if (input < 10) cout << " menor que "; else if (input > 10) cout << " maior que "; else cout << " igual a ";
  cout << "10" << endl;
}
