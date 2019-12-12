add_library(A STATIC
  A.c
)

target_include_directories(A PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
)
