#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <cstdint>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>
#include <clocale>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include "machine_state.h"
#include "machine_detail.h"

bool is_number(const std::string& s);

extern uint16_t request_id_global;

std::ostream& operator<<(std::ostream& out, const Machine_state state);

std::ostream& operator<<(std::ostream& out, const Machine_detail detail);

extern uint16_t machine_id_global;

#endif // FUNCTIONS_H
