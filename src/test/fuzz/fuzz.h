// Copyright (c) 2009-2020 The GleecBTC Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GLEECBTC_TEST_FUZZ_FUZZ_H
#define GLEECBTC_TEST_FUZZ_FUZZ_H

#include <stdint.h>
#include <vector>


void test_one_input(std::vector<uint8_t> buffer);

#endif // GLEECBTC_TEST_FUZZ_FUZZ_H
