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
