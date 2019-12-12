add_library(C STATIC
  C.c
)

target_include_directories(C PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(C PUBLIC
  B
)

