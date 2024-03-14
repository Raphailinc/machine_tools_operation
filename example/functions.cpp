#include "functions.h"

uint16_t request_id_global = 0;
uint16_t machine_id_global = 0;

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
};

std::ostream& operator<<(std::ostream& out, const Machine_state state)
{
    const static std::string strings[] = {
                                    std::string("Рабочий"),
                                    std::string("В ремонте"),
                                    std::string("Сломан"),
                                    std::string("Неизвестно")
    };

    return out << strings[size_t(state)];
}

std::ostream& operator<<(std::ostream& out, const Machine_detail detail)
{
    const static std::string strings[] = {
                                    std::string("Ремень"),
                                    std::string("Двигатель")
    };

    return out << strings[size_t(detail)];
}
