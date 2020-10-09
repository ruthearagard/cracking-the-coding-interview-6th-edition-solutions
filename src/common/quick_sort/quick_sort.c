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

// The most basic and unoptimized form of quick sort.

#include "quick_sort.h"

static void swap(int* const a, int* const b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

static int partition(int array[],
                     const unsigned int lo,
                     const unsigned int hi)
{
    
    int pivot = array[hi];
    int i = lo - 1;

    for (unsigned int j = lo; j <= hi - 1; ++j)
    {
        if (array[j] < pivot)
	{
            swap(&array[++i], &array[j]);
        }
    }
    swap(&array[++i], &array[hi]);
    return i;
}

/// @brief Sorts an array using the quick sort sorting method.
/// @param array The array to sort.
void ctci_quick_sort(int array[],
                     const unsigned int lo,
                     const unsigned int hi)
{
    if (lo < hi)
    {
        int part = partition(array, lo, hi);
        ctci_quick_sort(array, lo, part - 1);
        ctci_quick_sort(array, part + 1, hi);
    }
}
