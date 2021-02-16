set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(include)
add_subdirectory(src)

set(CFPM_INCLUDE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_BINARY_DIR}/include
)

# Compile everything exclude main function as a static library
add_library(cfpm_library
    STATIC ${CFPM_SRC} ${CFPM_HEADERS}
)
target_include_directories(cfpm_library
    PUBLIC ${CFPM_INCLUDE}
)

# Link the library and add the main function
add_executable(cfpm
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cxx
)
target_include_directories(cfpm
    PUBLIC ${CFPM_INCLUDE}
)
target_link_libraries(cfpm PUBLIC cfpm_library)

install(
    TARGETS cfpm
    RUNTIME DESTINATION bin
)

# Tests
if(BUILD_TESTING)
    add_subdirectory(test)
endif()
