/**
 *  Copyright Notice:
 *  Copyright 2021 DMTF. All rights reserved.
 *  License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/libspdm/blob/main/LICENSE.md
 **/

#include "spdm_unit_fuzzing.h"

spdm_test_context_t *m_spdm_test_context;

spdm_test_context_t *get_spdm_test_context(void)
{
    return m_spdm_test_context;
}

void setup_spdm_test_context(IN spdm_test_context_t *spdm_test_context)
{
    m_spdm_test_context = spdm_test_context;
}

uintn spdm_unit_test_group_setup(void **State)
{
    spdm_test_context_t *spdm_test_context;
    void *spdm_context;

    spdm_test_context = m_spdm_test_context;
    spdm_test_context->spdm_context =
        (void *)malloc(libspdm_get_context_size());
    if (spdm_test_context->spdm_context == NULL) {
        return (uintn)-1;
    }
    spdm_context = spdm_test_context->spdm_context;

    libspdm_init_context(spdm_context);
    libspdm_register_device_io_func(spdm_context,
                                    spdm_test_context->send_message,
                                    spdm_test_context->receive_message);
    libspdm_register_transport_layer_func(spdm_context,
                                          spdm_transport_test_encode_message,
                                          spdm_transport_test_decode_message);

    *State = spdm_test_context;
    return 0;
}

uintn spdm_unit_test_group_teardown(void **State)
{
    spdm_test_context_t *spdm_test_context;

    spdm_test_context = *State;
    free(spdm_test_context->spdm_context);
    spdm_test_context->spdm_context = NULL;
    return 0;
}

bool read_input_file(IN char *file_name, OUT void **file_data,
                     OUT uintn *file_size)
{
    FILE *fp_in;
    uintn temp_result;

    if ((fp_in = fopen(file_name, "rb")) == NULL) {
        printf("Unable to open file %s\n", file_name);
        *file_data = NULL;
        return false;
    }

    fseek(fp_in, 0, SEEK_END);
    *file_size = ftell(fp_in);

    *file_data = (void *)malloc(*file_size);
    if (NULL == *file_data) {
        printf("No sufficient memory to allocate %s\n", file_name);
        fclose(fp_in);
        return false;
    }

    fseek(fp_in, 0, SEEK_SET);
    temp_result = fread(*file_data, 1, *file_size, fp_in);
    if (temp_result != *file_size) {
        printf("Read input file error %s", file_name);
        free((void *)*file_data);
        fclose(fp_in);
        return false;
    }

    fclose(fp_in);

    return true;
}

void dump_hex_str(IN uint8_t *buffer, IN uintn buffer_size)
{
    uintn index;

    for (index = 0; index < buffer_size; index++) {
        printf("%02x", buffer[index]);
    }
}

void dump_data(IN uint8_t *buffer, IN uintn buffer_size)
{
    uintn index;

    for (index = 0; index < buffer_size; index++) {
        printf("%02x ", buffer[index]);
    }
}

void dump_hex(IN uint8_t *data, IN uintn size)
{
    uintn index;
    uintn count;
    uintn left;

#define COLUME_SIZE (16 * 2)

    count = size / COLUME_SIZE;
    left = size % COLUME_SIZE;
    for (index = 0; index < count; index++) {
        printf("%04x: ", (uint32_t)(index * COLUME_SIZE));
        dump_data(data + index * COLUME_SIZE, COLUME_SIZE);
        printf("\n");
    }

    if (left != 0) {
        printf("%04x: ", (uint32_t)(index * COLUME_SIZE));
        dump_data(data + index * COLUME_SIZE, left);
        printf("\n");
    }
}
