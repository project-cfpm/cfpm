cmake_minimum_required(VERSION 3.13)

project(
    cfpm
    VERSION 0.0.1
    DESCRIPTION "The C-Family Package Manager"
    LANGUAGES C CXX
)

# OPTIONS
option(BUILD_TESTING "Build testing target" ON)

add_subdirectory(third-party)

if(BUILD_TESTING)
    enable_testing()
endif()


add_subdirectory(cfpm)
