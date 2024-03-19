#ifndef MACHINE_STATE_H
#define MACHINE_STATE_H

#include <cstdint>

enum class Machine_state : uint8_t
{
    WORKING = 0,
    REPAIR,
    BROKEN,
    UNDEFINED,
};

#endif // MACHINE_STATE_H
