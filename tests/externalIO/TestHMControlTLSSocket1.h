// Copyright 2019, Oath Inc.
// Licensed under the terms of the Apache 2.0 license. See LICENSE file in the root of the distribution for licensing details.
#ifndef TESTS_HMCONTROLTLSSOCKET1_H_
#define TESTS_HMCONTROLTLSSOCKET1_H_

#include <cppunit/Test.h>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "HMStateManager.h"


#define TESTNAME Test_HMControlTLSSocket1

class TESTNAME : public CppUnit::TestFixture
{

    CPPUNIT_TEST_SUITE(TESTNAME);
#ifdef V6_TESTS
    CPPUNIT_TEST(test_cmdlstnr6);
    CPPUNIT_TEST(test_cmdlstnr7);
    CPPUNIT_TEST(test_cmdlstnr8);
    CPPUNIT_TEST(test_cmdlstnr9);
    CPPUNIT_TEST(test_cmdlstnr10);
    CPPUNIT_TEST(test_cmdlstnr11);
    CPPUNIT_TEST(test_cmdlstnr12);
    CPPUNIT_TEST(test_cmdlstnr13);
#endif
    CPPUNIT_TEST_SUITE_END();


public:
    void setUp();
    void tearDown();

protected:
    void test_cmdlstnr6();
    void test_cmdlstnr7();
    void test_cmdlstnr8();
    void test_cmdlstnr9();
    void test_cmdlstnr10();
    void test_cmdlstnr11();
    void test_cmdlstnr12();
    void test_cmdlstnr13();
    HMStateManager *sm;
    std::thread sm_thr;
    HMAPIIPAddress server;
    uint16_t port;
    std::string certfile;
    std::string keyfile;
    std::string caFile;

};
#endif /* TESTS_HMCONTROLTLSSOCKET1_H_ */
