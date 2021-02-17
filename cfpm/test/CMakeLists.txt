# TODO: Source file lists maintained here.
set(CFPM_TEST_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/stub.cxx
)

if(MSVC)
    message(FATAL_ERROR "MSVC NOT SUPPORTED") # FIXME: support
endif()

add_executable(cfpm_test ${CFPM_TEST_SRC})
target_include_directories(cfpm_test
    PUBLIC ${CFPM_INCLUDE} ${gtest_build_include_dirs} ${gmock_build_include_dirs}
)
target_link_libraries(cfpm_test 
    PUBLIC
    gtest gmock gtest_main gmock_main # GoogleTest stuff
    cfpm_library
)

add_test(NAME cfpmtest COMMAND cfpm_test)
