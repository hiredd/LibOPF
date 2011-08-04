#ifndef _COMMON_H_
#define _COMMON_H_

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <float.h>

#define TRUE  1
#define FALSE 0

/* Error messages */

#define LOG_OUT_OF_MEMORY    "Cannot allocate memory space"
#define LOG_CANNOT_OPEN_FILE "Cannot open file"
#define LOG_INVALID_OPT      "Invalid option"

#define warning(msg) (fprintf(stderr, "Warning (%s:%d@%s): %s\n", #msg, __FILE__, __LINE__, __func__))
#define error(msg)   (fprintf(stderr, "Error (%s:%d@%s): %s\n", #msg, __FILE__, __LINE__, __func__); assert(0))

/* Common data types */
typedef struct timeval timer;

/* Common definitions */

#define PI          3.1415926536
#define INTERIOR    0
#define EXTERIOR    1
#define BOTH        2
#define NIL        -1
#define INCREASING  1
#define DECREASING  0
#define Epsilon     1E-05

/* Common operations */

#ifndef MAX
#define MAX(x,y) (((x) > (y))?(x):(y))
#endif

#ifndef MIN
#define MIN(x,y) (((x) < (y))?(x):(y))
#endif

#ifndef SWAP
#define SWAP(x, y) do { const int temp##x##y = x; x = y; y = temp##x##y; } while (0)
#endif

/* Generates a random number within [low,high] */
int random_int (int low, int high);

#endif
