#ifndef HASHTABLE_H
#define HASHTABLE_H

// Number of buckets in the hash table.
// Larger values reduce collisions but use more memory.
#define BUCKET 10

// Type alias for hash values (useful for clarity and portability)
typedef unsigned int hashValue;

/**
 * Structure representing a single key-value pair (entry) in the hash table.
 * Uses a linked list to handle collisions (separate chaining).
 */
struct Entry
{
    int key;
    int value;
    struct Entry *next; // Pointer to the next entry in the same bucket
};

/**
 * Initializes the hash table by setting all buckets to NULL.
 * This function must be called before using the table.
 */
void initHashTable();

/**
 * Inserts a key-value pair into the hash table.
 * - If the key already exists, its value is updated.
 * - If the key is new, a new entry is added to the appropriate bucket.
 */
void insert(int key, int value);

/**
 * Removes an entry with the given key from the hash table.
 * - Returns the value associated with the key if found.
 * - Returns -1 if the key does not exist.
 */
int removeEntry(int key);

/**
 * Searches for an entry with the given key in the hash table.
 * - Returns the value associated with the key if found.
 * - Returns -1 if the key is not present.
 */
int getEntry(int key);

#endif
