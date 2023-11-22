#include <iostream>
using namespace std;

int main() {
  double massK, portionsG;
  cout << "Weight of Feed (Kg): ", cin >> massK;
  cout << "Weight of Portions Per Cat (g): ", cin >> portionsG;
  cout << "Your food will last: " << (massK/((portionsG/1000)*2)) << " days" << endl;
  cout << "After five day youll have " << (massK-(((portionsG/1000)*5)*2)) << " Kg left" << endl;
}
