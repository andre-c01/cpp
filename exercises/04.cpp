#include <iostream>
#include <ctime>
using namespace std;

int main() {
  int year_born;
  int current_year;
  int age;

  time_t t = time(NULL);
	tm* timePtr = localtime(&t);
  current_year = timePtr->tm_year + 1900;

  cout << "Type Your Year Of Birth: ";
  cin >> year_born;
  age = current_year-year_born;
  cout << "You Are " << age << " Years Old" << endl;
}
