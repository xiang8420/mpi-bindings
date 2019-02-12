anydsl_runtime_wrap(MAIN_PROGRAM
    CLANG_FLAGS ${CLANG_FLAGS}
    IMPALA_FLAGS ${IMPALA_FLAGS}
    FILES main.impala)
add_executable(main ${MAIN_PROGRAM})
target_link_libraries(main ${ANYDSL_RUNTIME_LIBRARIES})
add_test("main" main)
