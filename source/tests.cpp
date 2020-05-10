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

int sum_multiples (int a, int b, int c) {
    int result = 0;
    for (int i = 1; i <= c; i++) {
        if (i % a == 0 || i % b == 0) {
            result += i;
        }
    }
    return result;
}

TEST_CASE(" describe_sum_multiples ", "[sum_multiples]")
{
    REQUIRE(sum_multiples(3,5,1000) == 234168);
}
long factorial(int a) {
    long long factorial = 1;
    for (int counter = 1; counter <= a; counter++) {
        factorial *= counter;
    }
    return factorial;
}

TEST_CASE(" describe_factorial ", "[factorial]")
{
    REQUIRE(factorial(4) == 24);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(6) == 720);
    REQUIRE(factorial(10) == 3628800);
}


boolean is_prime (int a) {
    return true;
}

TEST_CASE(" describe_is_prime ", "[is_prime]")
{
    REQUIRE(is_prime(4) == false);
    REQUIRE(is_prime(5) == true);
    REQUIRE(is_prime(2) == true);
    REQUIRE(is_prime(3) == true);
    REQUIRE(is_prime(17) == true);
   
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
