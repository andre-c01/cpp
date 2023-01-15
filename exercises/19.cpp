#include <iostream>
using namespace std;

int main() {
  int code;
  int quantity;
  float cost = 0;

  cout << "Enter Code: ";
  cin >> code;
  cout << "Enter Amount: ";
  cin >> quantity;

  switch (code) {
    case 100: {
      cost = quantity * 1.2;
      break;
    }
    case 101: {
      cost = quantity * 1.3;
      break;
    }
    case 102: {
      cost = quantity * 1.5;
      break;
    }
    case 103: {
      cost = quantity * 1.2;
      break;
    }
    case 104: {
      cost = quantity * 1.3;
      break;
    }
    case 105: {
      cost = quantity * 1;
      break;
    }
    default: {
      cout << "O code nãexiste!" << endl;
    }
  }

  if (cost > 0) {
    cout << "O valor a pagar: " << cost << "€\n";
  }

}
