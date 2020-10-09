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

#ifndef IS_UNIQUE_H
#define IS_UNIQUE_H

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#include <stdbool.h>

/// @brief Brute force algorithm to determine if a string has all unique
/// characters.
/// @param str The string to examine.
/// @return `true` if the string has all unique characters, `false` otherwise.
bool brute_force(const char* const str);

/// @brief Optimized algorithm to determine if a string has all unique
/// characters.
/// @param str The string to examine.
/// @return `true` if the string has all unique characters, `false` otherwise.
bool optimized(char* str);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // IS_UNIQUE_H
