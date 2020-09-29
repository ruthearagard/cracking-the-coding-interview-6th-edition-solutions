add_library(is_unique STATIC is_unique.c is_unique.h)

set_target_properties(is_unique PROPERTIES
                      C_STANDARD 11
                      C_STANDARD_REQUIRED YES
                      C_EXTENSIONS OFF)

target_compile_options(is_unique PRIVATE -Wall -Werror -Wextra)
add_subdirectory(test)
