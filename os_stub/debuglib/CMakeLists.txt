cmake_minimum_required(VERSION 2.6)

INCLUDE_DIRECTORIES(${LIBSPDM_DIR}/include
                    ${LIBSPDM_DIR}/include/hal 
                    ${LIBSPDM_DIR}/include/hal/${ARCH}
)

SET(src_debuglib
    debuglib.c
)

ADD_LIBRARY(debuglib STATIC ${src_debuglib})
