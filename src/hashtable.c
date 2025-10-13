#include <stdlib.h>
#include "hashtable.h"

struct Entry *entries[BUCKET];

/**
 * Computes the hash value for a given key.
 *
 * Uses a simple multiplicative hash: multiplies the key by 31
 * and then takes modulo BUCKET to ensure the result fits within
 * the hash table array bounds.
 *
 * @param key   The integer key to hash
 * @return      The hash value (index) corresponding to the key
 */
static hashValue hashFunction(int key)
{
    return (key * 31) % BUCKET;
}

void initHashTable()
{
    for (int i = 0; i < BUCKET; i++)
    {
        entries[i] = NULL;
    }
}

void insert(int key, int value)
{
    hashValue hash = hashFunction(key);
    struct Entry *newentry = (struct Entry *)malloc(sizeof(struct Entry));
    newentry->value = value;
    newentry->key = key;
    newentry->next = NULL;

    if (!entries[hash])
    {
        entries[hash] = newentry;
        return;
    }

    struct Entry *current = entries[hash];
    struct Entry *prev = current;
    while (current)
    {
        if (current->key == key)
        {
            current->value = value;
            free(newentry);
            return;
        }
        prev = current;
        current = current->next;
    }
    prev->next = newentry;
}

int getEntry(int key)
{
    hashValue hash = hashFunction(key);
    struct Entry *current = entries[hash];
    while (current)
    {
        if (current->key == key)
        {
            return current->value;
        }
        current = current->next;
    }

    return -1;
}

int removeEntry(int key)
{
    hashValue hash = hashFunction(key);
    if (!entries[hash])
    {
        return -1;
    }

    struct Entry *current = entries[hash];
    struct Entry *prev = NULL;
    while (current)
    {
        if (current->key == key)
        {
            int temp = current->value;
            if (prev)
            {
                prev->next = current->next;
            }
            else
            {
                entries[hash] = current->next;
            }
            free(current);
            return temp;
        }
        prev = current;
        current = current->next;
    }

    return -1;
}