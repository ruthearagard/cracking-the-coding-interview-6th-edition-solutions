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

add_library(is_unique STATIC is_unique.c is_unique.h)

set_target_properties(is_unique PROPERTIES
                      C_STANDARD 11
                      C_STANDARD_REQUIRED YES
                      C_EXTENSIONS OFF)

target_compile_options(is_unique PRIVATE -Wall -Werror -Wextra)
add_subdirectory(test)
