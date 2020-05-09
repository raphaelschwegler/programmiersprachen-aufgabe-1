#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include < cmath >

int gcd(int a, int b)
{
    return 1;
}

TEST_CASE(" describe_gcd ", "[gcd]")
{
    CHECK(gcd(2, 4) == 2);
    CHECK(gcd(9, 6) == 3);
    CHECK(gcd(3, 7) == 1);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
