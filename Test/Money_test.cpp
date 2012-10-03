/*
 * Money_test.cpp
 *
 *  Created on: 2012/09/30
 *      Author: Akira
 */

#include "../Product/Money.h"

#include "CppUTest/TestHarness.h"


TEST_GROUP(TestSuiteMoney)
{
  void setup()
  {
  }
  void teardown()
  {
  }
};
//1円
TEST(TestSuiteMoney, TestCaseYen1)
{
    int checkvalue = Money::Yen1().getVal();
    LONGS_EQUAL(1, checkvalue);
}

//10円
TEST(TestSuiteMoney, TestCaseYen10)
{
    int checkvalue = Money::Yen10().getVal();
    LONGS_EQUAL(10, checkvalue);
}

//100円
TEST(TestSuiteMoney, TestCaseYen100)
{
    int checkvalue = Money::Yen100().getVal();
    LONGS_EQUAL(100, checkvalue);
}

//500円
TEST(TestSuiteMoney, TestCaseYen500)
{
    int checkvalue = Money::Yen500().getVal();
    LONGS_EQUAL(500, checkvalue);
}

//1000円
TEST(TestSuiteMoney, TestCaseYen1000)
{
    int checkvalue = Money::Yen1000().getVal();
    LONGS_EQUAL(1000, checkvalue);
}

//5000円
TEST(TestSuiteMoney, TestCaseYen5000)
{
    int checkvalue = Money::Yen5000().getVal();
    LONGS_EQUAL(5000, checkvalue);
}

//10000円
TEST(TestSuiteMoney, TestCaseYen10000)
{
    int checkvalue = Money::Yen10000().getVal();
    LONGS_EQUAL(10000, checkvalue);
}
//10円は使える。
TEST(TestSuiteMoney, TestCaseCanUse10Yen)
{
    bool canUse = IsValidMoney(Money::Yen10());
    CHECK_TRUE(canUse);
}
//1円は使えない
TEST(TestSuiteMoney, TestCaseCantUse1Yen)
{
    bool canUse = IsValidMoney(Money::Yen1());
    CHECK_FALSE(canUse);
}
//1000円は使える。
TEST(TestSuiteMoney, TestCaseCanUse1000Yen)
{
    bool canUse = IsValidMoney(Money::Yen1000());
    CHECK_TRUE(canUse);
}

