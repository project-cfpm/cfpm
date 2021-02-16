set(CMAKE_POLICY_DEFAULT_CMP0077 NEW) # FIXME: UGLY

if(BUILD_TESTING)
    set(INSTALL_GTEST OFF)
    add_subdirectory(googletest)
endif()
