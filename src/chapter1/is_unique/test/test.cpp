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
