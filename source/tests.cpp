#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include < cmath >
#include <math.h>

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
    if (a == 2 || a == 3) {
        return true;
    }
    else if (a <= 0) {
        return false;
    }
    else if (a == 1) {
        // depends on interpretation but my math teacher said no so....
        return false;
    }
    else {
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                return false;
            }
        }
    }
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

double fractal (double a) {
    double b;
    double c = modf(a, &b);
    return c;

}

TEST_CASE(" describe_fractal ", "[fractal]")
{
    REQUIRE(fractal(4.123) == Approx(0.123));
    REQUIRE(fractal(0.1241) == Approx(0.1241));
    REQUIRE(fractal(123132.3456) == Approx(0.3456));
    REQUIRE(fractal(-12.12) == Approx(-0.12));
}

double cVolume(double r, double h) {

    
    return (atan(1) * 4) * r * r * h;

}

TEST_CASE(" describe_cVolume ", "[cVolume]")
{
    REQUIRE(cVolume(4.0, 2.0) == Approx(100.53));
    REQUIRE(cVolume(2.2, 3.0) == Approx(45.6159253));
    REQUIRE(cVolume(0, 2.0) == Approx(0));
    REQUIRE(cVolume(1, 1) == Approx(3.1415926535898));
}

double cArea(double r, double h) {
    double area;
    area = 2 * (atan(1) * 4) * r * (r + h);
    return area;

}

TEST_CASE(" describe_cArea ", "[cArea]")
{
    REQUIRE(cArea(4.0, 2.0) == Approx(150.7964473723));
    REQUIRE(cArea(2.2, 3.0) == Approx(71.88));
    REQUIRE(cArea(0, 0) == Approx(0));
    REQUIRE(cArea(1, 1) == Approx(12.5663706144));
}


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
