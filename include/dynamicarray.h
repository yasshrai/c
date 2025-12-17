

#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#define InitVector(name, type) \
typedef struct {               \
    size_t capacity;           \
    size_t size;               \
    type *data;                \
} name;                        \
\
static void name##Push(name *array, type value) {   \
    if (array->data == NULL) {                        \
        array->data = malloc(sizeof(type));          \
        if (!array->data) {                          \
            printf("Memory allocation failed\n");    \
            return;                                  \
        }                                            \
        array->capacity = 1;                         \
        array->size = 0;                             \
    }                                                \
    else if (array->size == array->capacity) {       \
        type *temp = realloc(array->data, array->capacity * 2 * sizeof(type)); \
        if (!temp) {                                 \
            printf("Memory allocation failed\n");   \
            return;                                  \
        }                                            \
        array->data = temp;                          \
        array->capacity *= 2;                        \
    }                                                \
    array->data[array->size++] = value;              \
}


#endif  /* DYNAMICARRAY_H */