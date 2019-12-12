project(Transitive)
cmake_minimum_required(VERSION 3.6)

add_subdirectory(A)
add_subdirectory(B)
add_subdirectory(C)

add_executable(main main.c)

target_link_libraries(main PRIVATE
  C 
)

target_compile_options(main PRIVATE
  -Wall -Wextra -Werror
)
