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

#include <array>
#include <iostream>
#include "gtest/gtest.h"
#include "../quick_sort.h"

namespace
{
    TEST(QuickSortTest, AscendingOrder)
    {
        std::array numbers =
        {
            1, 8, 2, 5, 9, 8, 17, 29, 11, 3
        };

	static constexpr std::array sorted =
        {
            1, 2, 3, 5, 8, 8, 9, 11, 17, 29
        };
        ctci_quick_sort(numbers.data(), 0, numbers.size() - 1);
        EXPECT_TRUE(numbers == sorted);
    }
}
