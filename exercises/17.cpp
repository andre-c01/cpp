#include <iostream>
using namespace std;

int main() {
  float new_salary;
  char salary_plan;
  float salary;

  cout << "Enter Salary Plan(a,b,c): ";
  cin >> salary_plan;
  cout << "Enter Salary: ";
  cin >> salary;

  switch (salary_plan) {
    case 'a':
      cout << "New Salary: " << salary*1.10 << "€" << endl;
      break;
    case 'b':
      cout << "New Salary: " << salary*1.15 << "€" << endl;
      break;
    case 'c':
      cout << "New Salary: " << salary*1.20 << "€" << endl;
      break;
    default:
      cout << "No Plan Selected" << endl;
  }
}
