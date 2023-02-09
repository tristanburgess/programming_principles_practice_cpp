#include "std_lib_facilities.h"

int main() {
    string prev = " ";
    string cur;
    while (cin >> cur) {
        if (prev == cur) {
            cout << "Repeated word: " << cur << '\n';
        }
        prev = cur;
    }
}
