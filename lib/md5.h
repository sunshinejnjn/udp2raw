#ifndef UDP2RAW_MD5_H_
#define UDP2RAW_MD5_H_
#include <stdint.h>
#include <stddef.h>

void md5(const uint8_t *initial_msg, size_t initial_len, uint8_t *digest);
void md5_hmac( const unsigned char *key, size_t keylen,
               const unsigned char *input, size_t ilen,
               unsigned char output[16] );

#endif
