// Cracking the Coding Interview, 6th Edition (#ISBN-13 978-0984782857)
// solutions
//
// Written in 2020 by Michael Rodriguez <ruthearagard@gmail.com>
//
// To the extent possible under law, the author(s) have dedicated all copyright
// and related and neighboring rights to this software to the public domain
// worldwide. This software is distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain Dedication along
// with this software. If not, see
// <http://creativecommons.org/publicdomain/zero/1.0/>.

#include "gtest/gtest.h"
#include "../is_unique.h"

namespace
{
    TEST(BruteforceAlgorithm, ProducesValidResults)
    {
        EXPECT_FALSE(brute_force("ABCDEFGG"));
        EXPECT_TRUE(brute_force("ABCDEFG"));
    }

    TEST(OptimizedAlgorithm, ProducesValidResults)
    {
        char malformed[] = "ABCDEFGG";
        char valid[]     = "ABCDEFG";

        EXPECT_FALSE(optimized(malformed));
        EXPECT_TRUE(optimized(valid));
    }
}
