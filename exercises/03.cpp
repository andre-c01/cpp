#include <iostream>
#include<cmath>
using namespace std;

int main() {
  float mass;
  float height;
  float imc;
  cout << "Type Your Mass(Kg): ";
  cin >> mass;
  cout << "Type Your Height(m): ";
  cin >> height;
  imc = mass/pow(height,2);
  cout << "Your IMC Is: " << imc << endl;
}
