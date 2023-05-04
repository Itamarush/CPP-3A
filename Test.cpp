#include "doctest.h"
#include "sources/Fraction.hpp"
#include <stdexcept>
#include "iostream"
#include "stdio.h"

using namespace ariel;

TEST_CASE("Test Constructor")
{
    Fraction f1;
    CHECK(f1.getNum() == 0);
    CHECK(f1.getDen() == 1);

    Fraction f2(3, 4);
    CHECK(f2.getNum() == 3);
    CHECK(f2.getDen() == 4);

    Fraction f3(2.5);
    CHECK(f3.getNum() == 5);
    CHECK(f3.getDen() == 2);
}

TEST_CASE("Test Getters and Setters")
{
    Fraction f1(2, 3);
    CHECK(f1.getNum() == 2);
    CHECK(f1.getDen() == 3);

    f1.numerator = 4;
    f1.denominator = 5;
    CHECK(f1.getNum() == 4);
    CHECK(f1.getDen() == 5);
}

TEST_CASE("Test Comparison Operators")
{
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    CHECK(f1 > 0.3);
    CHECK(f2 >= f1);
}

TEST_CASE("Test Arithmetic Operators")
{
    Fraction f1(1, 2);
    Fraction f2(1, 4);

    Fraction f3 = f1 + f2;
    CHECK(f3.getNum() == 3);
    CHECK(f3.getDen() == 4);

    Fraction f4 = f1 + 0.5;
    CHECK(f4.getNum() == 1);
    CHECK(f4.getDen() == 1);

    Fraction f5 = f1 - f2;
    CHECK(f5.getNum() == 1);
    CHECK(f5.getDen() == 4);

    Fraction f6 = f1 - 1;
    CHECK(f6.getNum() == -1);
    CHECK(f6.getDen() == 2);

    Fraction f7 = f1 * 2.5;
    CHECK(f7.getNum() == 5);
    CHECK(f7.getDen() == 4);

    Fraction f8 = 3 * f1;
    CHECK(f8.getNum() == 3);
    CHECK(f8.getDen() == 2);

    Fraction f9 = f1 / 2;
    CHECK(f9.getNum() == 1);
    CHECK(f9.getDen() == 4);

    Fraction f10 = 2 / f1;
    CHECK(f10.getNum() == 4);
    CHECK(f10.getDen() == 1);

    Fraction f11 = f1 / f2;
    CHECK(f11.getNum() == 2);
    CHECK(f11.getDen() == 1);

    Fraction f12 = f1 * f2;
    CHECK(f12.getNum() == 1);
    CHECK(f12.getDen() == 8);
}

TEST_CASE("Test Increment and Decrement Operators")
{
    Fraction f1(1, 2);

    Fraction f2 = ++f1;
    CHECK(f2.getNum() == 3);
    CHECK(f2.getDen() == 2);
    CHECK(f1.getNum() == 3);
    CHECK(f1.getDen() == 2);

    Fraction f3 = f1++;
    CHECK(f3.getNum() == 3);
    CHECK(f3.getDen() == 2);
    CHECK(f1.getNum() == 5);
    CHECK(f1.getDen() == 2);

    Fraction f4 = --f1;
    CHECK(f4.getNum() == 3);
    CHECK(f4.getDen() == 2);
    CHECK(f1.getNum() == 3);
    CHECK(f1.getDen() == 2);

    Fraction f5 = f1--;
    CHECK(f5.getNum() == 3);
    CHECK(f5.getDen() == 2);
    CHECK(f1.getNum() == 1);
    CHECK(f1.getDen() == 2);
}