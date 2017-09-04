#include <string>
#include "test_case.h"

using namespace std;

extern string to_soundex(const string&);

TEST(ToSoundex, HandleEmptyLine) {
    ASSERT_EQ("", to_soundex(""));
}