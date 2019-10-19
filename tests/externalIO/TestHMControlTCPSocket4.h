// Copyright 2019, Oath Inc.
// Licensed under the terms of the Apache 2.0 license. See LICENSE file in the root of the distribution for licensing details.
#ifndef TEST_HMCONTROLTCPSOCKET4_H_
#define TEST_HMCONTROLTCPSOCKET4_H_

#include <cppunit/Test.h>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "HMStateManager.h"


#define TESTNAME Test_HMControlTCPSocket4

class TESTNAME : public CppUnit::TestFixture
{

    CPPUNIT_TEST_SUITE(TESTNAME);
#ifdef V6_TESTS
    CPPUNIT_TEST(test_cmdlstnr1);
    CPPUNIT_TEST(test_cmdlstnr2);
    CPPUNIT_TEST(test_cmdlstnr3);
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
    HMTimeStamp now;
    std::string host1 = "test.hm.com";
    std::string host2 = "test2.hm.com";
    std::string host3 = "test3.hm.com";
    HMAPIIPAddress server;
    uint16_t port;
};
#endif /* TEST_HMCONTROLTCPSOCKET4_H_ */