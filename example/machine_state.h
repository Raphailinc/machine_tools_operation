#ifndef MACHINE_STATE_H
#define MACHINE_STATE_H

#include <cstdint>

enum class Machine_state : uint8_t
{
    WORKING = 0,	// Рабочий
    REPAIR,			// В ремонте
    BROKEN,			// Сломан
    UNDEFINED,		// Неизвестно
};

#endif // MACHINE_STATE_H
