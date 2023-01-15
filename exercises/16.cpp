#include <iostream>
using namespace std;

int main() {
  float salary;
  cout << "Enter Salary: ";
  cin >> salary;
  if (salary >= 525) {
      cout << "The Worker Will Recieve: " << salary*1.10 << "€\n";
  } else {
    cout << "The Worker Will Recieve: " << salary*1.15 << "€\n";
  }
}
