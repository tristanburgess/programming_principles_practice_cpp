#include "std_lib_facilities.h"

int main() {
  cout << "Please enter your first name and age in years\n";
  string firstName = "???";
  double ageYrs = -1.0;
  cin >> firstName >> ageYrs;
  double ageMonths = ageYrs * 12.0;
  cout << "Hello, " << firstName << " (age in years " << ageYrs << ", age in months " << ageMonths << ")\n";
}