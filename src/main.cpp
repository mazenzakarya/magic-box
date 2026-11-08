#include <iomanip>
#include <iostream>

#include "DelayForCrossPlatform.h"
#include "TerminalTextLocationLib.h"
using namespace std;

void magicBox(int n) {
  int row = 0;
  int col = n / 2;

  for (int num = 1; num <= n * n; num++) {
    moveTo(row * 2 + 3, col * 6 + 3);

    cout << num << flush;

    if (num == n * n) break;
    delay(100);

    if (num % n == 0) {
      row++;
      if (row == n) row = 0;
    } else {
      row--;
      col++;

      if (row < 0) row = n - 1;
      if (col == n) col = 0;
    }
  }
}

int main() {
  initialize();

  int n;

  cout << "Enter an odd number: ";
  cin >> n;
  // clear
  cout << "\033[2J";

  if (n <= 0 || n % 2 == 0) {
    cout << "Enter a positive odd number!";
    return 0;
  }

  magicBox(n);
  


  return 0;
}