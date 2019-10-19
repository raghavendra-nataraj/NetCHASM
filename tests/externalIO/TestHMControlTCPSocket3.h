// Copyright 2019, Oath Inc.
// Licensed under the terms of the Apache 2.0 license. See LICENSE file in the root of the distribution for licensing details.
#ifndef TESTS_HMCONTROLTCPSOCKET3_H_
#define TESTS_HMCONTROLTCPSOCKET3_H_

#include <cppunit/Test.h>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "HMStateManager.h"


#define TESTNAME Test_HMControlTCPSocket3

class TESTNAME : public CppUnit::TestFixture
{

    CPPUNIT_TEST_SUITE(TESTNAME);
    CPPUNIT_TEST(test_cmdlstnr1);
    CPPUNIT_TEST(test_cmdlstnr3);
#ifdef V6_TESTS
    CPPUNIT_TEST(test_cmdlstnr2);
    CPPUNIT_TEST(test_cmdlstnr4);
#endif
    CPPUNIT_TEST_SUITE_END();


public:
    void setUp();
    void tearDown();

protected:
    void test_cmdlstnr1();
    void test_cmdlstnr2();
    void test_cmdlstnr3();
    void test_cmdlstnr4();
    HMStateManager *sm;
    std::thread sm_thr;
    HMAPIIPAddress serverv4;
    uint16_t portv4;
    HMAPIIPAddress serverv6;
    uint16_t portv6;
};
#endif /* TESTS_HMCONTROLTCPSOCKET3_H_ */
