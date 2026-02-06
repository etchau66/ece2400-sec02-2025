add_library(sec02-lib 
    square.c
)

add_executable(square-adhoc square-adhoc.c)
target_link_libraries(square-adhoc PUBLIC
  sec02-lib
)

add_executable(avg-main avg-main.c)
add_executable(avg3-main avg3-main.c)
