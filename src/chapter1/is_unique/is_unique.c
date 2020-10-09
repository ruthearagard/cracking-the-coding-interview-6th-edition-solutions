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

#include <limits.h>
#include <string.h>
#include "is_unique.h"

/// @brief Brute force algorithm to determine if a string has all unique
/// characters.
/// @param str The string to examine.
/// @return `true` if the string has all unique characters, `false` otherwise.
bool brute_force(const char* const str)
{
    const size_t length = strlen(str);

    for (size_t index = 0; index < length; ++index)
    {
        for (size_t next_index = index + 1; next_index < length; ++next_index)
        {
            if (str[index] == str[next_index])
            {
                return false;
            }
        }
    }
    return true;
}

/// @brief Optimized algorithm to determine if a string has all unique
/// characters.
/// @param str The string to examine.
/// @return `true` if the string has all unique characters, `false` otherwise.
bool optimized(char* str)
{
    unsigned char a[UCHAR_MAX + 1] = { 0 };

    for (; *str; str++)
    {
        if (++a[(unsigned char)*str] > 1)
        {
            return false;
        }
    }
    return true;
}
