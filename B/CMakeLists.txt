add_library(B STATIC
  B.c
)

target_include_directories(B PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(B PRIVATE
  A
)
