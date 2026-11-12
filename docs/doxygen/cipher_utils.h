/**
 * @file cipher_utils.h
 * @brief Header file for basic cryptographic operations demonstrating Doxygen capabilities.
 * @author Paarth Pandey
 */

#ifndef CIPHER_UTILS_H
#define CIPHER_UTILS_H

/**
 * @brief Encrypts a payload string using a baseline shift cipher.
 * @param data A pointer to the character array containing the payload.
 * @param shift The integer offset for the cipher implementation.
 * @return 0 on successful encryption, -1 on null pointer exception.
 */
int encrypt_payload(char* data, int shift);

/**
 * @brief Computes a checksum hash for data integrity validation.
 * @param input The constant string sequence to be hashed.
 * @return A 32-bit unsigned integer representing the computed hash.
 */
unsigned int generate_hash(const char* input);

#endif
