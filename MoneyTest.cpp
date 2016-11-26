#include <iostream>
#include "MoneyTest.h"

// Register the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(MoneyTest);

void MoneyTest::setUp()
{

}

void MoneyTest::tearDown()
{

}

void MoneyTest::testConstructor()
{
    //CPPUNIT_FAIL("Not implemented");

    // Set up
    const std::string currencyTest("Test");
    const double longNumber = 12345678.90123;

    // Process
    Money money(longNumber, currencyTest);

    // Check
    CPPUNIT_ASSERT_EQUAL(longNumber, money.getAmount());
    CPPUNIT_ASSERT_EQUAL(currencyTest, money.getCurrency());
}

void MoneyTest::testEqual()
{
    //CPPUNIT_FAIL("Not implemented");

    // Set up
    const Money money123Test(123, "Test");
    const Money money123USD(123, "USD");
    const Money money12Test(12, "Test");
    const Money money12USD(12, "USD");

    // Process & Check
    CPPUNIT_ASSERT(money123Test == money123Test);   // ==
    CPPUNIT_ASSERT(money12Test != money123Test);    // != amount
    CPPUNIT_ASSERT(money123USD != money123Test);    // != currency
    CPPUNIT_ASSERT(money12USD != money123Test);     // != amount and != currency
}

void MoneyTest::testAdd()
{
    //CPPUNIT_FAIL("Not implemented");

    // Set up
    const Money money12Test(12, "Test");
    const Money expectedMoney(135, "Test");

    // Process
    Money money(123, "Test");
    money += money12Test;

    // Check
    CPPUNIT_ASSERT(expectedMoney == money);             // add works
    CPPUNIT_ASSERT(&money == &(money += money12Test));  // add returns a reference to 'this'
}

void MoneyTest::testAddThrow()
{
    //CPPUNIT_FAIL("Not implemented");

    // Set up
    const Money money123Test(123, "Test");

    // Process
    Money money(123, "USD");
    money += money123Test;      // should throw IncompatibleMoneyError exception
}

void MoneyTest::thisTestWillFail()
{
    CPPUNIT_FAIL("I told you this test would fail");
}