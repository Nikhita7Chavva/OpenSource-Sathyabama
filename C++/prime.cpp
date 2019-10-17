// C++ Code to check whether the number is Prime or Not

#include <iostream.h>

#include <conio.h>

using namespace std;
class prime {
  int a, k, i;
  public:
    prime(int x) {
      a = x;
    }
  void cal() {
    k = 1;
    for (i = 2; i <= a / 2; i++) {
      if (a % i == 0) {
        k = 0;
        break;
      } else {
        k = 1;
      }
    }
  }
  void display() {
    if (k == 1) {
      cout << "It is a Prime Number" << endl;
    } else {
      cout << "It is not a Prime Number" << endl;
    }
  }
};
void main() {
  clrscr();
  int a;
  cout << "Enter the Number: \n";
  cin >> a;
  prime obj(a);
  obj.cal();
  obj.display();
  getch();
}
