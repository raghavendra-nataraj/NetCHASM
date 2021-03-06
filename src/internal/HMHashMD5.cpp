// Copyright 2019, Oath Inc.
// Licensed under the terms of the Apache 2.0 license. See LICENSE file in the root of the distribution for licensing details.
#include <cstring>

#include "HMHashMD5.h"
#include "HMLogBase.h"

using namespace std;

HMHashMD5::HMHashMD5() :
                finalized(false)
{
     ctx = EVP_MD_CTX_new();
}

bool 
HMHashMD5::init()
{
    //sets ctx to use type EVP_md5
    if(!EVP_DigestInit_ex(ctx, EVP_md5(), nullptr))//ret 1 - success 0- failure
    {
        HMLog(HM_LOG_DEBUG3, "HMHashMD5 ctx initialisation failed");
        return false;
    }
    return true;
}

void
HMHashMD5::update(const void* data, size_t len)
{
    HMLog(HM_LOG_DEBUG3, "HMHashMD5::update");
    if (!finalized)
    {
        HMLog(HM_LOG_DEBUG3, "HMHashMD5::update not finalised");
        if(!EVP_DigestUpdate(ctx, data, len))//ret 1 - success 0- failure
        {
            HMLog(HM_LOG_ERROR, "HMHashMD5::update hash is not updated successfully");
        }        
    }
}

void
HMHashMD5::final(HMHash& hash)
{
    if (!finalized)
    {
        uint32_t md_len;
        if(!EVP_DigestFinal_ex(ctx, hash.m_hashValue, &hash.m_hashSize))//ret 1 - success 0- failure
        {
            HMLog(HM_LOG_ERROR, "HMHashMD5 ctx is not copied to md_value");
        }
        HMLog(HM_LOG_DEBUG3, "HMHashMD5::final Hash Length %d ", md_len);
        finalized = true;
    }
}

size_t
HMHashMD5::size() const
{
    return EVP_MD_CTX_size(ctx);
}

HMHashMD5::~HMHashMD5()
{
    finalized = false;
    EVP_MD_CTX_free(ctx);
}
