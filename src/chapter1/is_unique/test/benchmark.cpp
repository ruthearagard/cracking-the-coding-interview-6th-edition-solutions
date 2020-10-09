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

#include <benchmark/benchmark.h>
#include "../is_unique.h"

static auto bench_brute_force(benchmark::State& state) noexcept -> void
{
    for (auto _ : state)
    {
        brute_force("ABCDEFG");
    }
}
BENCHMARK(bench_brute_force);

static auto bench_optimized(benchmark::State& state) noexcept -> void
{
    char str[] = "ABCDEFG";

    for (auto _ : state)
    {
        optimized(str);
    }
}
BENCHMARK(bench_optimized);

BENCHMARK_MAIN();
