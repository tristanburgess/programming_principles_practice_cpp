#include "std_lib_facilities.h"

int main() {
  cout << "Please enter your first name and age\n";
  string firstName = "???";
  int age = -1;
  cin >> firstName >> age;
  cout << "Hello, " << firstName << " (age " << age << ")\n";
}