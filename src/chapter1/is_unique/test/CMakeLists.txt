# Cracking the Coding Interview, 6th Edition (#ISBN-13 978-0984782857)
# solutions
#
# Written in 2020 by Michael Rodriguez <ruthearagard@gmail.com>
#
# To the extent possible under law, the author(s) have dedicated all copyright
# and related and neighboring rights to this software to the public domain
# worldwide. This software is distributed without any warranty.
#
# You should have received a copy of the CC0 Public Domain Dedication along
# with this software. If not, see
# <http://creativecommons.org/publicdomain/zero/1.0/>.

enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(is_unique_test test.cpp)

set_target_properties(is_unique_test PROPERTIES
	              CXX_STANDARD 17
		      CXX_STANDARD_REQUIRED YES
		      CXX_EXTENSIONS OFF)

target_link_libraries(is_unique_test is_unique GTest::GTest GTest::Main)
target_compile_options(is_unique_test PRIVATE -Wall -Werror -Wextra)

gtest_discover_tests(is_unique_test)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    find_package(benchmark REQUIRED)

    add_executable(is_unique_bench benchmark.cpp)

    set_target_properties(is_unique_bench PROPERTIES
                          CXX_STANDARD 17
                          CXX_STANDARD_REQUIRED YES
                          CXX_EXTENSIONS OFF)

    target_link_libraries(is_unique_bench is_unique benchmark::benchmark)
    target_compile_options(is_unique_bench PRIVATE -Wall -Werror -Wextra)
endif()
