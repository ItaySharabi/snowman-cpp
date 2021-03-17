#include "doctest.h"
#include "snowman.hpp"

using namespace ariel;
using namespace std;
using namespace doctest;

int valid_number() {
    int ans = rand()%4 + 1;
    ans *= 10;
    for (int i = 0; i < 7; i++)
    {
        ans += rand()%4 + 1;
        ans *= 10;
    }

    return ans/10;
}

long int n_digit_number(int n) {

    if(n <= 0){return 0;}
    long int ans, r;

    ans = rand()%10 + 1; // 1 -> 9 

    for (int i = 0; i < n-1; i++)
    {
        ans *= 10;
        r = rand()%10;
        ans += r;
    }
    return ans;   
}

TEST_CASE("Short inputs") { // N = 7 CHECKS

    int n = NUM_ELEMENTS;
    for (int i = 1; i < n; i++)
    {
        CHECK_THROWS(snowman(n_digit_number(i)));
    }
}

TEST_CASE("Good inputs") { // 20 CHECKS of good random inputs

    for (int i = 0; i < 20; i++)
    {   
        int valid_num = valid_number(); // returns a valid - 8 - digits long number
        CHECK_NOTHROW(snowman(valid_num));
    }
}

TEST_CASE("Long inputs") { // 3 CHECKS
    const int num_bad_inputs = 3;
    array<int, num_bad_inputs> long_input = {9, 10, 11};
    
    for (int i = 0; i < num_bad_inputs; i++)
    {
        CHECK_THROWS(snowman(long_input[i]));
    }
}

TEST_CASE("Correct length input with invalid digits") { // 8 CHECKS

    bool ans = true;
    const int good1 = 14414341;
    const int good2 = 22312311;
    const int good3 = 11111111;
    const int good4 = 44444444;

    const int bad1 = 30203030;
    const int bad2 = 11111115;
    const int bad3 = 12351231;
    const int bad4 = -12312312;

    CHECK_THROWS(snowman(good1));
    CHECK_THROWS(snowman(good2));
    CHECK_THROWS(snowman(good3));
    CHECK_THROWS(snowman(good4));
    CHECK_THROWS(snowman(bad1));
    CHECK_THROWS(snowman(bad2));
    CHECK_THROWS(snowman(bad3));
    CHECK_THROWS(snowman(bad4));
}