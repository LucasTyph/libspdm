/**
    Copyright Notice:
    Copyright 2021 DMTF. All rights reserved.
    License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/libspdm/blob/main/LICENSE.md
**/

/** @file
  HMAC-SHA256 Wrapper Implementation.
**/

#include "internal_crypt_lib.h"

/**
  Allocates and initializes one HMAC_CTX context for subsequent HMAC-SHA256 use.

  @return  Pointer to the HMAC_CTX context that has been initialized.
           If the allocations fails, hmac_sha256_new() returns NULL.

**/
void *hmac_sha256_new(void)
{
	ASSERT(FALSE);
	return NULL;
}

/**
  Release the specified HMAC_CTX context.

  @param[in]  hmac_sha256_ctx  Pointer to the HMAC_CTX context to be released.

**/
void hmac_sha256_free(IN void *hmac_sha256_ctx)
{
	ASSERT(FALSE);
}

/**
  Set user-supplied key for subsequent use. It must be done before any
  calling to hmac_sha256_update().

  If hmac_sha256_ctx is NULL, then return FALSE.

  @param[out]  hmac_sha256_ctx  Pointer to HMAC-SHA256 context.
  @param[in]   key                Pointer to the user-supplied key.
  @param[in]   key_size            key size in bytes.

  @retval TRUE   The key is set successfully.
  @retval FALSE  The key is set unsuccessfully.

**/
boolean hmac_sha256_set_key(OUT void *hmac_sha256_ctx, IN const uint8 *key,
			    IN uintn key_size)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Makes a copy of an existing HMAC-SHA256 context.

  If hmac_sha256_ctx is NULL, then return FALSE.
  If new_hmac_sha256_ctx is NULL, then return FALSE.

  @param[in]  hmac_sha256_ctx     Pointer to HMAC-SHA256 context being copied.
  @param[out] new_hmac_sha256_ctx  Pointer to new HMAC-SHA256 context.

  @retval TRUE   HMAC-SHA256 context copy succeeded.
  @retval FALSE  HMAC-SHA256 context copy failed.

**/
boolean hmac_sha256_duplicate(IN const void *hmac_sha256_ctx,
			      OUT void *new_hmac_sha256_ctx)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Digests the input data and updates HMAC-SHA256 context.

  This function performs HMAC-SHA256 digest on a data buffer of the specified size.
  It can be called multiple times to compute the digest of long or discontinuous data streams.
  HMAC-SHA256 context should be initialized by hmac_sha256_new(), and should not be finalized
  by hmac_sha256_final(). Behavior with invalid context is undefined.

  If hmac_sha256_ctx is NULL, then return FALSE.

  @param[in, out]  hmac_sha256_ctx Pointer to the HMAC-SHA256 context.
  @param[in]       data              Pointer to the buffer containing the data to be digested.
  @param[in]       data_size          size of data buffer in bytes.

  @retval TRUE   HMAC-SHA256 data digest succeeded.
  @retval FALSE  HMAC-SHA256 data digest failed.

**/
boolean hmac_sha256_update(IN OUT void *hmac_sha256_ctx, IN const void *data,
			   IN uintn data_size)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Completes computation of the HMAC-SHA256 digest value.

  This function completes HMAC-SHA256 hash computation and retrieves the digest value into
  the specified memory. After this function has been called, the HMAC-SHA256 context cannot
  be used again.
  HMAC-SHA256 context should be initialized by hmac_sha256_new(), and should not be finalized
  by hmac_sha256_final(). Behavior with invalid HMAC-SHA256 context is undefined.

  If hmac_sha256_ctx is NULL, then return FALSE.
  If hmac_value is NULL, then return FALSE.

  @param[in, out]  hmac_sha256_ctx  Pointer to the HMAC-SHA256 context.
  @param[out]      hmac_value          Pointer to a buffer that receives the HMAC-SHA256 digest
                                      value (32 bytes).

  @retval TRUE   HMAC-SHA256 digest computation succeeded.
  @retval FALSE  HMAC-SHA256 digest computation failed.

**/
boolean hmac_sha256_final(IN OUT void *hmac_sha256_ctx, OUT uint8 *hmac_value)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Computes the HMAC-SHA256 digest of a input data buffer.

  This function performs the HMAC-SHA256 digest of a given data buffer, and places
  the digest value into the specified memory.

  If this interface is not supported, then return FALSE.
  
  @param[in]   data        Pointer to the buffer containing the data to be digested.
  @param[in]   data_size    size of data buffer in bytes.
  @param[in]   key         Pointer to the user-supplied key.
  @param[in]   key_size     key size in bytes.
  @param[out]  hash_value   Pointer to a buffer that receives the HMAC-SHA256 digest
                           value (32 bytes).

  @retval TRUE   HMAC-SHA256 digest computation succeeded.
  @retval FALSE  HMAC-SHA256 digest computation failed.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha256_all(IN const void *data, IN uintn data_size,
			IN const uint8 *key, IN uintn key_size,
			OUT uint8 *hmac_value)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Allocates and initializes one HMAC_CTX context for subsequent HMAC-SHA384 use.

  @return  Pointer to the HMAC_CTX context that has been initialized.
           If the allocations fails, hmac_sha384_new() returns NULL.

**/
void *hmac_sha384_new(void)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Release the specified HMAC_CTX context.

  @param[in]  hmac_sha384_ctx  Pointer to the HMAC_CTX context to be released.

**/
void hmac_sha384_free(IN void *hmac_sha384_ctx)
{
	ASSERT(FALSE);
}

/**
  Set user-supplied key for subsequent use. It must be done before any
  calling to hmac_sha384_update().

  If hmac_sha384_ctx is NULL, then return FALSE.
  If this interface is not supported, then return FALSE.

  @param[out]  hmac_sha384_ctx  Pointer to HMAC-SHA384 context.
  @param[in]   key                Pointer to the user-supplied key.
  @param[in]   key_size            key size in bytes.

  @retval TRUE   The key is set successfully.
  @retval FALSE  The key is set unsuccessfully.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha384_set_key(OUT void *hmac_sha384_ctx, IN const uint8 *key,
			    IN uintn key_size)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Makes a copy of an existing HMAC-SHA384 context.

  If hmac_sha384_ctx is NULL, then return FALSE.
  If new_hmac_sha384_ctx is NULL, then return FALSE.
  If this interface is not supported, then return FALSE.

  @param[in]  hmac_sha384_ctx     Pointer to HMAC-SHA384 context being copied.
  @param[out] new_hmac_sha384_ctx  Pointer to new HMAC-SHA384 context.

  @retval TRUE   HMAC-SHA384 context copy succeeded.
  @retval FALSE  HMAC-SHA384 context copy failed.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha384_duplicate(IN const void *hmac_sha384_ctx,
			      OUT void *new_hmac_sha384_ctx)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Digests the input data and updates HMAC-SHA384 context.

  This function performs HMAC-SHA384 digest on a data buffer of the specified size.
  It can be called multiple times to compute the digest of long or discontinuous data streams.
  HMAC-SHA384 context should be initialized by hmac_sha384_new(), and should not be finalized
  by hmac_sha384_final(). Behavior with invalid context is undefined.

  If hmac_sha384_ctx is NULL, then return FALSE.
  If this interface is not supported, then return FALSE.

  @param[in, out]  hmac_sha384_ctx Pointer to the HMAC-SHA384 context.
  @param[in]       data              Pointer to the buffer containing the data to be digested.
  @param[in]       data_size          size of data buffer in bytes.

  @retval TRUE   HMAC-SHA384 data digest succeeded.
  @retval FALSE  HMAC-SHA384 data digest failed.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha384_update(IN OUT void *hmac_sha384_ctx, IN const void *data,
			   IN uintn data_size)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Completes computation of the HMAC-SHA384 digest value.

  This function completes HMAC-SHA384 hash computation and retrieves the digest value into
  the specified memory. After this function has been called, the HMAC-SHA384 context cannot
  be used again.
  HMAC-SHA384 context should be initialized by hmac_sha384_new(), and should not be finalized
  by hmac_sha384_final(). Behavior with invalid HMAC-SHA384 context is undefined.

  If hmac_sha384_ctx is NULL, then return FALSE.
  If hmac_value is NULL, then return FALSE.
  If this interface is not supported, then return FALSE.

  @param[in, out]  hmac_sha384_ctx  Pointer to the HMAC-SHA384 context.
  @param[out]      hmac_value          Pointer to a buffer that receives the HMAC-SHA384 digest
                                      value (48 bytes).

  @retval TRUE   HMAC-SHA384 digest computation succeeded.
  @retval FALSE  HMAC-SHA384 digest computation failed.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha384_final(IN OUT void *hmac_sha384_ctx, OUT uint8 *hmac_value)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Computes the HMAC-SHA384 digest of a input data buffer.

  This function performs the HMAC-SHA384 digest of a given data buffer, and places
  the digest value into the specified memory.

  If this interface is not supported, then return FALSE.

  @param[in]   data        Pointer to the buffer containing the data to be digested.
  @param[in]   data_size    size of data buffer in bytes.
  @param[in]   key         Pointer to the user-supplied key.
  @param[in]   key_size     key size in bytes.
  @param[out]  hash_value   Pointer to a buffer that receives the HMAC-SHA384 digest
                           value (48 bytes).

  @retval TRUE   HMAC-SHA384 digest computation succeeded.
  @retval FALSE  HMAC-SHA384 digest computation failed.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha384_all(IN const void *data, IN uintn data_size,
			IN const uint8 *key, IN uintn key_size,
			OUT uint8 *hmac_value)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Allocates and initializes one HMAC_CTX context for subsequent HMAC-SHA512 use.

  @return  Pointer to the HMAC_CTX context that has been initialized.
           If the allocations fails, hmac_sha512_new() returns NULL.

**/
void *hmac_sha512_new(void)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Release the specified HMAC_CTX context.

  @param[in]  hmac_sha512_ctx  Pointer to the HMAC_CTX context to be released.

**/
void hmac_sha512_free(IN void *hmac_sha512_ctx)
{
	ASSERT(FALSE);
}

/**
  Set user-supplied key for subsequent use. It must be done before any
  calling to hmac_sha512_update().

  If hmac_sha512_ctx is NULL, then return FALSE.
  If this interface is not supported, then return FALSE.

  @param[out]  hmac_sha512_ctx  Pointer to HMAC-SHA512 context.
  @param[in]   key                Pointer to the user-supplied key.
  @param[in]   key_size            key size in bytes.

  @retval TRUE   The key is set successfully.
  @retval FALSE  The key is set unsuccessfully.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha512_set_key(OUT void *hmac_sha512_ctx, IN const uint8 *key,
			    IN uintn key_size)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Makes a copy of an existing HMAC-SHA512 context.

  If hmac_sha512_ctx is NULL, then return FALSE.
  If new_hmac_sha512_ctx is NULL, then return FALSE.
  If this interface is not supported, then return FALSE.

  @param[in]  hmac_sha512_ctx     Pointer to HMAC-SHA512 context being copied.
  @param[out] new_hmac_sha512_ctx  Pointer to new HMAC-SHA512 context.

  @retval TRUE   HMAC-SHA512 context copy succeeded.
  @retval FALSE  HMAC-SHA512 context copy failed.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha512_duplicate(IN const void *hmac_sha512_ctx,
			      OUT void *new_hmac_sha512_ctx)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Digests the input data and updates HMAC-SHA512 context.

  This function performs HMAC-SHA512 digest on a data buffer of the specified size.
  It can be called multiple times to compute the digest of long or discontinuous data streams.
  HMAC-SHA512 context should be initialized by hmac_sha512_new(), and should not be finalized
  by hmac_sha512_final(). Behavior with invalid context is undefined.

  If hmac_sha512_ctx is NULL, then return FALSE.
  If this interface is not supported, then return FALSE.

  @param[in, out]  hmac_sha512_ctx Pointer to the HMAC-SHA512 context.
  @param[in]       data              Pointer to the buffer containing the data to be digested.
  @param[in]       data_size          size of data buffer in bytes.

  @retval TRUE   HMAC-SHA512 data digest succeeded.
  @retval FALSE  HMAC-SHA512 data digest failed.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha512_update(IN OUT void *hmac_sha512_ctx, IN const void *data,
			   IN uintn data_size)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Completes computation of the HMAC-SHA512 digest value.

  This function completes HMAC-SHA512 hash computation and retrieves the digest value into
  the specified memory. After this function has been called, the HMAC-SHA512 context cannot
  be used again.
  HMAC-SHA512 context should be initialized by hmac_sha512_new(), and should not be finalized
  by hmac_sha512_final(). Behavior with invalid HMAC-SHA512 context is undefined.

  If hmac_sha512_ctx is NULL, then return FALSE.
  If hmac_value is NULL, then return FALSE.
  If this interface is not supported, then return FALSE.

  @param[in, out]  hmac_sha512_ctx  Pointer to the HMAC-SHA512 context.
  @param[out]      hmac_value          Pointer to a buffer that receives the HMAC-SHA512 digest
                                      value (64 bytes).

  @retval TRUE   HMAC-SHA512 digest computation succeeded.
  @retval FALSE  HMAC-SHA512 digest computation failed.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha512_final(IN OUT void *hmac_sha512_ctx, OUT uint8 *hmac_value)
{
	ASSERT(FALSE);
	return FALSE;
}

/**
  Computes the HMAC-SHA512 digest of a input data buffer.

  This function performs the HMAC-SHA512 digest of a given data buffer, and places
  the digest value into the specified memory.

  If this interface is not supported, then return FALSE.

  @param[in]   data        Pointer to the buffer containing the data to be digested.
  @param[in]   data_size    size of data buffer in bytes.
  @param[in]   key         Pointer to the user-supplied key.
  @param[in]   key_size     key size in bytes.
  @param[out]  hash_value   Pointer to a buffer that receives the HMAC-SHA512 digest
                           value (64 bytes).

  @retval TRUE   HMAC-SHA512 digest computation succeeded.
  @retval FALSE  HMAC-SHA512 digest computation failed.
  @retval FALSE  This interface is not supported.

**/
boolean hmac_sha512_all(IN const void *data, IN uintn data_size,
			IN const uint8 *key, IN uintn key_size,
			OUT uint8 *hmac_value)
{
	ASSERT(FALSE);
	return FALSE;
}
