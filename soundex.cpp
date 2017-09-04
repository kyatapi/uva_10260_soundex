#include <string>
#include <iostream>

using namespace std;

string to_soundex(const string& word) {
    string soundex = "";
    return soundex;
}

int main(int argc, char **argv) {
    string word = "";
    while(getline(cin, word)) {
        cout << to_soundex(word);
    }
}