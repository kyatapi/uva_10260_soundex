#include <string>
#include "test_case.h"

using namespace std;

extern string to_soundex(const string&);

TEST(ToSoundex, HandleEmptyLine) {
    ASSERT_EQ("", to_soundex(""));
}

TEST(ToSoundex, HandleLineWithoutRepeat) {
    ASSERT_EQ("25", to_soundex("KHAWN"));
}

TEST(ToSoundex, HandleLineWithRepeat) {
    ASSERT_EQ("1236", to_soundex("PFISTER"));
    ASSERT_EQ("11", to_soundex("BOBBY"));
}