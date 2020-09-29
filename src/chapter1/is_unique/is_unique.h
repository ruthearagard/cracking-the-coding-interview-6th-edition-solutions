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
