#include <stdbool.h>
#include <stdint.h>

typedef struct
{
    bool paused;
    bool running;
    uint64_t ticks;
} GBA;
