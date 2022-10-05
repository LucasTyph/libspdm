cmake_minimum_required(VERSION 2.6)

INCLUDE_DIRECTORIES(${LIBSPDM_DIR}/os_stub/spdm_device_secret_lib
                    ${LIBSPDM_DIR}/include
                    ${LIBSPDM_DIR}/include/hal
                    ${LIBSPDM_DIR}/include/hal/${ARCH}
)

SET(src_spdm_device_secret_lib
    lib.c
    cert.c
)

ADD_LIBRARY(spdm_device_secret_lib STATIC ${src_spdm_device_secret_lib})

ADD_LIBRARY(spdm_device_secret_lib_mod STATIC ${src_spdm_device_secret_lib})

target_compile_definitions(spdm_device_secret_lib_mod PRIVATE REMOVE_MEAS_COLLECTION)
