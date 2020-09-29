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
