#include <iostream>
using namespace std;

int main() {
  float hour_value;
  float work_hour;
  float sal;
  cout << "Type What You Are Paid On The Hour: ";
  cin >> hour_value;
  cout << "Type The Hours You Worked For: ";
  cin >> work_hour;
  sal = hour_value * work_hour;
  cout << "You Should Be Paid: " << sal << "€\n";
}
