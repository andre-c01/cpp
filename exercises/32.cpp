#include <iostream>
using namespace std;

int main() {
  int A,B;
  cout << "Write Var A: " , cin >> A;
  cout << "Write Var B: " , cin >> B;
  swap(A, B);
  cout << "\\/A = " << A << endl << "/\\B = " << B << endl;
}
