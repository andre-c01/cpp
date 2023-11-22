#include <iostream>
using namespace std;

int main() {
  int cad1 = 0, cad2 = 0, cad3 = 0, cad4 = 0, vnull = 0, vno = 0, vote = 0;
  cout << "Candidates:\n| 1\n| 2\n| 3\n| 4\n|| 5 - Null\n|| 6 - No Vote\n|| 0 - Exit" << endl;
  do {
    cout << "Register Your Vote: ", cin >> vote;
    switch (vote) {
      case 1:
        cad1++;
        break;
      case 2:
        cad2++;
        break;
      case 3:
        cad3++;
        break;
      case 4:
        cad4++;
        break;
      case 5:
        vnull++;
        break;
      case 6:
        vno++;
        break;
      case 0:
        cout << "Exit" << endl;
        break;
      default:
        cout << "Invalid" << endl;
    }
  } while(vote != 0);
  cout << "Candidate 1: " << cad1 << " votes." << endl;
  cout << "Candidate 2: " << cad2 << " votes." << endl;
  cout << "Candidate 3: " << cad3 << " votes." << endl;
  cout << "Candidate 4: " << cad4 << " votes." << endl;
  cout << "Null: " << vnull << " votes." << endl;
  cout << "Didnt Vote: " << vno << " votes." << endl;
}
