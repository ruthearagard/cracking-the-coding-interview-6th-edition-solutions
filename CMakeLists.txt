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

# Using the first version of CMake released in 2019 appears to be reasonable.
#
# FATAL_ERROR is specified so that CMake versions <=2.4 fail with an error
# instead of just a warning.
cmake_minimum_required(VERSION 3.13.3 FATAL_ERROR)

project(ctci_solutions
        VERSION 1.0.0.0
	DESCRIPTION "Cracking the Coding Interview (6th edition) solutions"
        HOMEPAGE_URL ""
	LANGUAGES C CXX)

# We only support gcc or clang, let's check to see if we're using either or.
# Using the first version of either released in 2019 appears to be reasonable.
if (CMAKE_C_COMPILER_ID STREQUAL "Clang" AND
    CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    if (CMAKE_CXX_COMPILER_VERSION LESS "8.0.0")
        message(FATAL_ERROR "This project requires clang >=8.00 or gcc >=8.3.")
    endif()
elseif (CMAKE_C_COMPILER_ID STREQUAL "GNU" AND
	CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    if (CMAKE_CXX_COMPILER_VERSION LESS "8.3")
        message(FATAL_ERROR "This project requires clang >=8.00 or gcc >=8.3.")
    endif()
endif()

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(WARNING "Benchmarks will not be built, compile in Release mode to do so.")
endif()

add_subdirectory(src)
