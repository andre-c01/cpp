#include <iostream>
using namespace std;

int main() {
  int num;

  cout << "Enter Number: ";
  cin >> num;

  switch(num) {
    case 0:
      cout << "Zero" << endl;
      break;
    case 1:
      cout << "Um" << endl;
      break;
    case 2:
      cout << "Dois" << endl;
      break;
    case 3:
      cout << "Três" << endl;
      break;
    case 4:
      cout << "Quatro" << endl;
      break;
    case 5:
      cout << "Cinco" << endl;
      break;
    case 6:
      cout << "Seis" << endl;
      break;
    case 7:
      cout << "Sete" << endl;
      break;
    case 8:
      cout << "Oito" << endl;
      break;
    case 9:
      cout << "Nove" << endl;
      break;
    case 10:
      cout << "Dez" << endl;
      break;
    default:
      cout << "Este número é maior ou menor que 10!" << endl;
      break;
  }
}
