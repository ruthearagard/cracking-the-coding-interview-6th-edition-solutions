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
