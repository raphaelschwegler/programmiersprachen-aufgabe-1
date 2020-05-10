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

int quersumme (int a){
    int result = 0;
    while (a > 0) {
        result += a % 10;
        a = a / 10;
    }
    return result;
}

TEST_CASE(" describe_quersumme ", "[quersumme]")
{
    REQUIRE(quersumme(2) == 2);
    REQUIRE(quersumme(99) == 18);
    REQUIRE(quersumme(13885) == 25);
    REQUIRE(quersumme(0) == 0);
    REQUIRE(quersumme(121501) == 10);
    REQUIRE(quersumme(121551) == 15);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
