configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cfpm-config.h.in ${CMAKE_CURRENT_BINARY_DIR}/cfpm-config.h)
# TODO: Source file lists maintained here.
set(CFPM_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/cfpm-main.hxx
PARENT_SCOPE)
