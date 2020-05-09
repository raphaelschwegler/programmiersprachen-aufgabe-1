#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include < cmath >

int gcd(int a, int b)
{
    if (a == 0 || b == 0) {
        return -1;
    }
    if (a < b) {
        int c = a;
        a = b;
        b = c;
    }
    for (int gcd = b; gcd > 0; gcd--) {
        if ((b % gcd == 0) && (a % gcd == 0)) {
            return gcd;
        }
    }
    return 1;
}

TEST_CASE(" describe_gcd ", "[gcd]")
{
    REQUIRE(gcd(2, 4) == 2);
    REQUIRE(gcd(9, 6) == 3);
    REQUIRE(gcd(3, 7) == 1);
    REQUIRE(gcd(0, 7) == -1);
    REQUIRE(gcd(3, 0) == -1);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
