#include <iostream>
using namespace std;

int main() {
  double temp = 0;
  string state = "";
  do {
    cout << "state: " << state << endl;
    cout << "Type the current temp: " , cin >> temp;
    cout << "\033[2F\033[0J";
    if (temp <= 15) {
      state = "Muito Frio";
    } else if (temp >= 16 && temp < 23) {
      state = "Frio";
    } else if (temp >= 23 && temp < 26) {
      state = "Agradavel";
    } else if (temp >= 26 && temp <= 30) {
      state = "Quente";
    } else if (temp >= 30) {
      state = "Muito Quente";
    }
  } while(true);
}
