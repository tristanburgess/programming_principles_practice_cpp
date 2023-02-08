#include "std_lib_facilities.h"

/*int main() {
  cout << "Please enter a floating-point value: ";
  double n;
  cin >> n;
  cout << "n == " << n
       << "\nn + 1 == " << n + 1
       << "\n3 * n == " << 3 * n
       << "\n2 * n == " << n + n
       << "\nn ^ 2 == " << n * n
       << "\nn / 2 == " << n / 2
       << "\nsqrt(n) == " << sqrt(n)
       << '\n';
}*/

int main() {
  cout << "Please enter an integer value: ";
  int n;
  cin >> n;
  cout << "n == " << n
       << "\nn + 1 == " << n + 1
       << "\n3 * n == " << 3 * n
       << "\n2 * n == " << n + n
       << "\nn ^ 2 == " << n * n
       << "\nn / 2 == " << n / 2
       << "\nn % 2 == " << n % 2
       << "\nsqrt(n) == " << sqrt((double) n)
       << '\n';
}