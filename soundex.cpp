#include <string>
#include <iostream>

#ifndef ONLINE_JUDGE
#include "test_case.h"
extern void run_test(int argc, char **argv);
#else
inline void run_test(int argc, char **argv) {}
#endif // !ONLINE_JUDGE

using namespace std;

string to_soundex(const string& word) {
    string soundex = "";
    return soundex;
}

int main(int argc, char **argv) {
    run_test(argc, argv);

    string word = "";
    while(getline(cin, word)) {
        cout << to_soundex(word);
    }
}