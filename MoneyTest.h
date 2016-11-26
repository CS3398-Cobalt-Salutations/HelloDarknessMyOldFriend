#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include "Money.h"

class MoneyTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(MoneyTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testEqual);
    CPPUNIT_TEST(testAdd);
    CPPUNIT_TEST_EXCEPTION(testAddThrow, IncompatibleMoneyError);
    CPPUNIT_TEST(thisTestWillFail);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

    void testConstructor();
    void testEqual();
    void testAdd();
    void testAddThrow();
    void thisTestWillFail();
};