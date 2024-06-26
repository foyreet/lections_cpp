#include <iostream>
using namespace std;

void solution() {
  long long a, b, c;
  cin >> a >> b >> c;
  if (c < 0) {
    cout << "NO SOLUTION";
    return;
  }

  if (a == 0) {
    if (b == c*c) {
      cout << "MANY SOLUTIONS";
    }
    else {
      cout << "NO SOLUTION";
    }
  }
  else {
    if ((c * c - b) % a != 0) {
      cout << "NO SOLUTION";
    }
    else {
      long long x = (c * c - b) / a;
      if (a * x + b < 0) {
        cout << "NO SOLUTION";
      } else {
        cout << x;
      }
    }
  }
}

int main() {
  solution();
}
