#include <string>
#include <iostream>
#include <array>
#include <algorithm>

#ifndef ONLINE_JUDGE
#include "test_case.h"
extern void run_test(int argc, char **argv);
#else
inline void run_test(int argc, char **argv) {}
#endif // !ONLINE_JUDGE

using namespace std;

string to_soundex(const string& word) {
    const static array<char, 26> letter_to_soundex = 
    {' ', '1', '2', '3', ' ', '1', '2', ' ', ' ', '2', '2', '4', '5', '5', ' ', '1', '2', '6', '2', '3', ' ', '1', ' ', '2', ' ', '2'};
    //A,   B,   C,   D,   E,   F,   G,   H,   I,   J,   K,   L,   M,   N,   O,   P,   Q,   R,   S,   T,   U,   V,   W,   X,   Y,   Z

    string soundex = "";
    for_each(word.begin(), word.end(), [&soundex](char letter) {
        char soundex_letter = letter_to_soundex.at(letter - 'A');
        if(soundex_letter != ' ') soundex.push_back(soundex_letter);
    });
    return soundex;
}

int main(int argc, char **argv) {
    run_test(argc, argv);

    string word = "";
    while(getline(cin, word)) {
        cout << to_soundex(word);
    }
}