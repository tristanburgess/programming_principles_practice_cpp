#include "std_lib_facilities.h"

int main() {
    int wordCount = 0;
    string prev = " ";
    string cur;
    while (cin >> cur) {
        ++wordCount;
        if (prev == cur) {
            cout << "word number: " << wordCount << "\trepeated word: " << cur << '\n';
        }
        prev = cur;
    }
}
