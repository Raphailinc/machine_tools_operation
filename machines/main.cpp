#include <iostream>
#include <fstream>
#include <cstdint>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>
#include <clocale>
#include <windows.h>

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

enum class Machine_state : uint8_t
{
    WORKING = 0,	// Рабочий
    REPAIR,			// В ремонте
    BROKEN,			// Сломан
    UNDEFINED,		// Неизвестно
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

uint16_t machine_id_global = 0;
class Machine
{
protected:
    bool		 active;	// Работает ли сейчас
    uint16_t	 id;
    uint16_t	 belt_wear;		// Степень изношенности ремня
    uint16_t	 engine_wear;	// Степень изношенности двигателя
    uint16_t	 speed_engine;	// Кол-во оборотов
    Machine_state state;	// Состояние станка
public:
    Machine(const uint16_t belt_wear,
            const uint16_t engine_wear,
            const uint16_t speed_engine,
            const Machine_state state);
    ~Machine();

    void print() const;

    Machine_state get_state() const;
    void		  set_state(const Machine_state state);

    uint16_t get_id() const;

    uint16_t get_belt_wear() const;
    void	 set_belt_wear(const uint16_t belt_wear);

    uint16_t get_engine_wear() const;
    void	 set_engine_wear(const uint16_t engine_wear);

    uint16_t get_speed_engine() const;
    void	 set_speed_engine(const uint16_t speed_engine);

    void change();
};

Machine::Machine(const uint16_t belt_wear,
                 const uint16_t engine_wear,
                 const uint16_t speed_engine,
                 const Machine_state state) :
    belt_wear{belt_wear},
    engine_wear{engine_wear},
    speed_engine{speed_engine},
    state{state}
{
    if (state == Machine_state::UNDEFINED)
    {
        this->id = -1;
    }
    else
    {
        this->id = machine_id_global++;
    }
    this->active = false;
}

Machine::~Machine()
{
}

    Machine_state state;	// Состояние станка
    bool		 active;	// Работает ли сейчас
    uint16_t	 id;
    uint16_t	 belt_wear;		// Степень изношенности ремня
    uint16_t	 engine_wear;	// Степень изношенности двигателя
    uint16_t	 speed_engine;	// Кол-во оборотов

void Machine::print() const
{
    std::cout << "id: " << this->id << '\n'\
              << "Состояние: " << this->state << '\n'\
              << "Работает ли сейчас: " << this->active << '\n'\
              << "Состояние ремня: " << this->belt_wear << '\n'\
              << "Состояние двигателя: " << this->engine_wear << '\n'\
              << "Количество оборотов: " << this->speed_engine << std::endl;
}

Machine_state Machine::get_state() const
{
    return this->state;
}

void Machine::set_state(const Machine_state state)
{
    this->state = state;
}

uint16_t Machine::get_id() const
{
    return this->id;
}

uint16_t Machine::get_belt_wear() const
{
    return this->belt_wear;
}

void Machine::set_belt_wear(const uint16_t belt_wear)
{
    this->belt_wear = belt_wear;;
}

uint16_t Machine::get_engine_wear() const
{
    return this->engine_wear;
}

void Machine::set_engine_wear(const uint16_t engine_wear)
{
    this->engine_wear = engine_wear;;
}

uint16_t Machine::get_speed_engine() const
{
    return this->speed_engine;
}

void Machine::set_speed_engine(const uint16_t speed_engine)
{
    this->speed_engine = speed_engine;
}

void Machine::change()
{
    std::cout << "Это - форма для изменения станка. Для выхода "\
                 "из формы нужно ввести exit в любой момент заполнения формы.\n\n";

    std::cout << "Текущее состояние станка:\n";
    this->print();

    std::string input;
    uint8_t state;
    while (true)
    {
        std::cout << "Состояние (Рабочий = 0, В ремонте = 1, Сломан = 2): ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Вы вышли из формы изменения станка" << std::endl;
            return;
        }
        else if (is_number(input))
        {
            state = std::stoi(input);
            if (state > 2)
            {
                std::cout << "Данные о состоянии неверно введены." << std::endl;
                continue;
            }
            break;
        }
    }

    uint64_t belt_wear;
    while (true)
    {
        std::cout << "Состояние ремня (от 0 до 65535): ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Вы вышли из формы изменения станка" << std::endl;
            return;
        }
        else if (is_number(input))
        {
            belt_wear = std::stoi(input);
            if (belt_wear > 65535)
            {
                std::cout << "Данные о состоянии ремня неверно введены." << std::endl;
                continue;
            }
            break;
        }
    }

    uint64_t engine_wear;
    while (true)
    {
        std::cout << "Состояние двигателя (от 0 до 65535): ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Вы вышли из формы изменения станка" << std::endl;
            return;
        }
        else if (is_number(input))
        {
            engine_wear = std::stoi(input);
            if (engine_wear > 65535)
            {
                std::cout << "Данные о состоянии двигателя неверно введены." << std::endl;
                continue;
            }
            break;
        }
    }

    uint64_t speed_engine;
    while (true)
    {
        std::cout << "Количество оборотов (от 0 до 32000): ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Вы вышли из формы изменения станка" << std::endl;
            return;
        }
        else if (is_number(input))
        {
            speed_engine = std::stoi(input);
            if (speed_engine > 65535)
            {
                std::cout << "Данные о количестве оборотов неверно введены." << std::endl;
                continue;
            }
            break;
        }
    }

    this->belt_wear = (uint16_t)belt_wear;
    this->engine_wear = (uint16_t)engine_wear;
    this->speed_engine = (uint16_t)speed_engine;
    this->state = (Machine_state)state;

    std::cout << "Станок успешно изменен." << std::endl;
}

/*machines.bin - Название файла, где хранятся данные о машинах*/
class Machine_list
{
public:
    std::vector<Machine> machine_list;
    void push_back(const Machine machine);
    const Machine* get_by_id(const uint16_t id) const;

    Machine_list();
    ~Machine_list();

    void print() const;
    void create();  // Форма для создания нового станка
    /*
        Формат хранения данных: бинарный
        Первые 2 байта - общее количество машин, далее хранится структура
        данных каждой машины
    */
    void save() const;  // Сохраняет в файл machines.bin данные о машинах
    void load();		// Загружает из файла machines.bin данные о машинах
};

Machine_list::Machine_list()
{
    this->load();
}

Machine_list::~Machine_list()
{
    this->save();
}

void Machine_list::print() const
{
    std::cout << "Список машин:" << '\n';
    std::vector<Machine>::const_iterator iter = this->machine_list.begin();
    while(iter != this->machine_list.end())
    {
        (*iter).print();
        std::cout << '\n';
        iter++;
    }
    std::cout << std::endl;
}

void Machine_list::create()
{
    std::cout << "Это - форма для создания нового станка. Для выхода "\
                 "из формы нужно ввести exit в любой момент заполнения формы.\n";

    std::string input;
    uint8_t state;
    while (true)
    {
        std::cout << "Состояние (Рабочий = 0, В ремонте = 1, Сломан = 2): ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Вы вышли из формы создания станка" << std::endl;
            return;
        }
        else if (is_number(input))
        {
            state = std::stoi(input);
            if (state > 2)
            {
                std::cout << "Данные о состоянии неверно введены." << std::endl;
                continue;
            }
            break;
        }
    }

    uint64_t belt_wear;
    while (true)
    {
        std::cout << "Состояние ремня (от 0 до 65535): ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Вы вышли из формы создания станка" << std::endl;
            return;
        }
        else if (is_number(input))
        {
            belt_wear = std::stoi(input);
            if (belt_wear > 65535)
            {
                std::cout << "Данные о состоянии ремня неверно введены." << std::endl;
                continue;
            }
            break;
        }
    }

    uint64_t engine_wear;
    while (true)
    {
        std::cout << "Состояние двигателя (от 0 до 65535): ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Вы вышли из формы создания станка" << std::endl;
            return;
        }
        else if (is_number(input))
        {
            engine_wear = std::stoi(input);
            if (engine_wear > 65535)
            {
                std::cout << "Данные о состоянии двигателя неверно введены." << std::endl;
                continue;
            }
            break;
        }
    }

    uint64_t speed_engine;
    while (true)
    {
        std::cout << "Количество оборотов (от 0 до 32000): ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Вы вышли из формы создания станка" << std::endl;
            return;
        }
        else if (is_number(input))
        {
            speed_engine = std::stoi(input);
            if (speed_engine > 65535)
            {
                std::cout << "Данные о количестве оборотов неверно введены." << std::endl;
                continue;
            }
            break;
        }
    }

    Machine new_machine = Machine((uint16_t)belt_wear,
                                  (uint16_t)engine_wear,
                                  (uint16_t)speed_engine,
                                  (Machine_state)state
    );
    this->push_back(new_machine);

    std::cout << "Станок успешно добавлен в список станков." << std::endl;
}

void Machine_list::save() const
{
    std::ofstream out("C:\\QT\\projects\\machines\\machines.bin", std::ios::binary | std::ios::out);

    const uint16_t list_size = this->machine_list.size();
    out.write((char*)&list_size, sizeof(list_size));

    std::vector<Machine>::const_iterator iter = this->machine_list.begin();
    while(iter != this->machine_list.end())
    {
        out.write((char*)&(*iter), sizeof(Machine));
        iter++;
    }
    out.close();
}

void Machine_list::load()
{
    std::ifstream in("C:\\QT\\projects\\machines\\machines.bin", std::ios::binary | std::ios::in);

    uint16_t list_size;
    in.read((char*)&list_size, sizeof(list_size));
    machine_id_global = list_size;

    for(uint16_t i = 0; i < list_size; i++)
    {
        Machine loaded_machine = Machine(0, 0, 0, Machine_state::UNDEFINED);
        in.read((char*)&loaded_machine, sizeof(Machine));
        this->machine_list.push_back(loaded_machine);
    }
    in.close();
}

void Machine_list::push_back(const Machine machine)
{
    this->machine_list.push_back(machine);
    this->save();
}

const Machine* Machine_list::get_by_id(const uint16_t id) const
{
    std::vector<Machine>::const_iterator iter = this->machine_list.cbegin();
    while(iter != this->machine_list.end())
    {
        if (iter->get_id() == id)
        {
            return &(*iter);
        }
        iter++;
    }
    return nullptr;
}


enum class Machine_detail : uint8_t
{
    WEAR	= 0,	// Ремень
    ENGINE	= 1,	// Двигатель
};

std::ostream& operator<<(std::ostream& out, const Machine_detail detail)
{
    const static std::string strings[] = {
                                    std::string("Ремень"),
                                    std::string("Двигатель")
    };

    return out << strings[size_t(detail)];
}


uint16_t request_id_global = 0;
class Request  // Заявка
{
public:
    uint16_t	id;
    uint16_t	id_machine;
    std::string email;
    std::string phone;
    std::string name;
    std::string surname;
    std::string patronymic;
    std::string message;
    std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail;

    Request();
    Request(const uint16_t id_machine,
            const std::string email,
            const std::string phone,
            const std::string name,
            const std::string surname,
            const std::string patronymic,
            const std::string message,
            std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail);
    ~Request();

    void print() const;
    void change();
};

Request::Request()
{
}

Request::Request(const uint16_t id_machine,
                 const std::string email,
                 const std::string phone,
                 const std::string name,
                 const std::string surname,
                 const std::string patronymic,
                 const std::string message,
                 std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail):
    id_machine{id_machine},
    email{email},
    phone{phone},
    name{name},
    surname{surname},
    patronymic{patronymic},
    message{message},
    list_broken_detail{list_broken_detail}
{
    this->id = request_id_global++;
}

Request::~Request()
{
}

void Request::print() const
{
    std::cout << "id заявки: " << this->id << '\n'\
              << "id машины: " << this->id_machine << '\n'\
              << "email: " << this->email << '\n'\
              << "Номер телефона: " << this->phone << '\n'\
              << "Имя: " << this->name << '\n'\
              << "Фамилия: " << this->surname << '\n'\
              << "Отчество: " << this->patronymic << '\n'\
              << "Описание проблемы: " << this->message << '\n'\
              << "\nСписок деталей, требующих ремонта:" << std::endl;

    std::vector<std::pair<Machine_detail, Machine_state>>::const_iterator iter = this->list_broken_detail.begin();
    while(iter != this->list_broken_detail.end())
    {
        std::cout << '\t' << iter->first << ": " << iter->second << std::endl;
        iter++;
    }
}

void Request::change()
{
    std::cout << "Это - форма для изменения запроса. Для выхода "\
                 "из формы нужно ввести exit в любой момент заполнения формы.\n\n";

    std::string input;
    std::cout << "Текущие данные запроса: " << std::endl;
    this->print();

    std::cout << "email: ";
    std::string email;
    std::cin >> email;
    if (email == "exit")
    {
        std::cout << "Вы вышли из формы изменения запроса" << std::endl;
        return;
    }

    std::cout << "Номер телефона: ";
    std::string phone;
    std::cin >> phone;
    if (phone == "exit")
    {
        std::cout << "Вы вышли из формы изменения запроса" << std::endl;
        return;
    }

    std::cout << "Имя: ";
    std::string name;
    std::cin >> name;
    if (name == "exit")
    {
        std::cout << "Вы вышли из формы изменения запроса" << std::endl;
        return;
    }

    std::cout << "Фамилия: ";
    std::string surname;
    std::cin >> surname;
    if (surname == "exit")
    {
        std::cout << "Вы вышли из формы изменения запроса" << std::endl;
        return;
    }

    std::cout << "Отчество: ";
    std::string patronymic;
    std::cin >> patronymic;
    if (patronymic == "exit")
    {
        std::cout << "Вы вышли из формы изменения запроса" << std::endl;
        return;
    }

    std::cout << "Описание: ";
    std::string message;
    std::cin >> message;
    if (message== "exit")
    {
        std::cout << "Вы вышли из формы изменения запроса" << std::endl;
        return;
    }

    std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail;
    std::pair<Machine_detail, Machine_state> info_detail;
    std::vector<std::string> arguments_input;
    std::cout << "Деталь (Ремень = 0, Двигатель = 1)\n";
    std::cout << "Состояние (Рабочий = 0, В ремонте = 1, Сломан = 2)\n";
    std::cout << "Вводите список сломанных деталей в формате деталь|состояние, чтобы закончить ввод списка деталей введите \"ready\": ";

    while (true)
    {
        arguments_input.clear();
        std::getline(std::cin, input);
        // Разделение строки на аргументы
        std::istringstream istream(input);
        std::string _tmp;
        while (std::getline(istream, _tmp, '|')) {
            arguments_input.push_back(_tmp);
        }
        if (arguments_input.size() == 0)
        {
            continue;
        }

        if (arguments_input[0] == "exit")
        {
            std::cout << "Вы вышли из формы изменения запроса" << std::endl;
            return;
        }
        else if (arguments_input[0] == "ready")
        {
            std::cout << "Вы закончили ввод списка сломанных деталей." << std::endl;
            break;
        }
        else if (is_number(arguments_input[0]))
        {
            if (is_number(arguments_input[1]))
            {
                uint8_t detail = std::stoi(arguments_input[0]);
                uint8_t detail_state = std::stoi(arguments_input[1]);
                if (detail > 1)
                {
                    std::cout << "Детали с id=" << detail << " не существует." << std::endl;
                    continue;
                }
                if (detail_state > 2)
                {
                    std::cout << "Состояния с id=" << detail_state << " не существует." << std::endl;
                    continue;
                }
                info_detail.first = Machine_detail(detail);
                info_detail.second = Machine_state(detail_state);
                list_broken_detail.push_back(info_detail);
            }
            else
            {
                std::cout << "Неверный ввод id состояния детали." << std::endl;
            }
        }
        else
        {
            std::cout << "Неверный ввод id детали." << std::endl;
        }
    }

    std::cout << "Запрос успешно изменен." << std::endl;
    this->message = message;
    this->patronymic = patronymic;
    this->surname = surname;
    this->name = name;
    this->phone = phone;
    this->email = email;
    this->list_broken_detail = list_broken_detail;
}

/*requests.txt - Название файла, где хранится данные о запросах*/
class Request_list
{
protected:
    std::vector<Request> request_list;
public:
    void push_back(const Request request);
    const Request* get_by_id(const uint16_t id) const;

    Request_list();
    ~Request_list();

    void create(const Machine_list& machine_list);
    void print() const;
    /*
        Формат хранения данных: текстовый
    */
    void save() const;  // Сохраняет в файл requests.txt данные о запросах
    void load();		// Загружает из файла requests.txt данные о запросах
};

Request_list::Request_list()
{
    this->load();
}

Request_list::~Request_list()
{
    this->save();
}

void Request_list::push_back(const Request request)
{
    this->request_list.push_back(request);
    this->save();
}

void Request_list::print() const
{
    std::cout << "Список запросов:" << '\n';
    std::vector<Request>::const_iterator iter = this->request_list.begin();
    while(iter != this->request_list.end())
    {
        (*iter).print();
        std::cout << '\n';
        iter++;
    }
    std::cout << std::endl;
}

void Request_list::create(const Machine_list& machine_list)
{
    std::cout << "Это - форма для создания запроса. Для выхода "\
                 "из формы нужно ввести exit в любой момент заполнения формы.\n";

    std::string input;
/*
    Request::Request(const uint16_t id_machine,
                     const std::string email,
                     const std::string phone,
                     const std::string name,
                     const std::string surname,
                     const std::string patronymic,
                     const std::string message,
                     std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail):
*/
    uint16_t id_machine;
    while (true)
    {
        std::cout << "id станка: ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Вы вышли из формы создания станка" << std::endl;
            return;
        }
        else if (is_number(input))
        {
            id_machine = std::stoi(input);
            const Machine* get_machine = machine_list.get_by_id(id_machine);
            if (get_machine == nullptr)
            {
                std::cout << "Станка с id=" << id_machine << " не существует." << std::endl;
                continue;
            }
            break;
        }
    }
    std::cout << "email: ";
    std::string email;
    std::cin >> email;
    if (email == "exit")
    {
        std::cout << "Вы вышли из формы создания станка" << std::endl;
        return;
    }

    std::cout << "Номер телефона: ";
    std::string phone;
    std::cin >> phone;
    if (phone == "exit")
    {
        std::cout << "Вы вышли из формы создания станка" << std::endl;
        return;
    }

    std::cout << "Имя: ";
    std::string name;
    std::cin >> name;
    if (name == "exit")
    {
        std::cout << "Вы вышли из формы создания станка" << std::endl;
        return;
    }

    std::cout << "Фамилия: ";
    std::string surname;
    std::cin >> surname;
    if (surname == "exit")
    {
        std::cout << "Вы вышли из формы создания станка" << std::endl;
        return;
    }

    std::cout << "Отчество: ";
    std::string patronymic;
    std::cin >> patronymic;
    if (patronymic == "exit")
    {
        std::cout << "Вы вышли из формы создания станка" << std::endl;
        return;
    }

    std::cout << "Описание: ";
    std::string message;
    std::cin >> message;
    if (message== "exit")
    {
        std::cout << "Вы вышли из формы создания станка" << std::endl;
        return;
    }

    std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail;
    std::pair<Machine_detail, Machine_state> info_detail;
    std::vector<std::string> arguments_input;
    std::cout << "Деталь (Ремень = 0, Двигатель = 1)\n";
    std::cout << "Состояние (Рабочий = 0, В ремонте = 1, Сломан = 2)\n";
    std::cout << "Вводите список сломанных деталей в формате деталь|состояние, чтобы закончить ввод списка деталей введите \"ready\": ";

    while (true)
    {
        arguments_input.clear();
        std::getline(std::cin, input);
        // Разделение строки на аргументы
        std::istringstream istream(input);
        std::string _tmp;
        while (std::getline(istream, _tmp, '|')) {
            arguments_input.push_back(_tmp);
        }
        if (arguments_input.size() == 0)
        {
            continue;
        }
        if (arguments_input[0] == "exit")
        {
            std::cout << "Вы вышли из формы создания станка" << std::endl;
            return;
        }
        else if (arguments_input[0] == "ready")
        {
            std::cout << "Вы закончили ввод списка сломанных деталей." << std::endl;
            break;
        }
        else if (is_number(arguments_input[0]))
        {
            if (is_number(arguments_input[1]))
            {
                uint8_t detail = std::stoi(arguments_input[0]);
                uint8_t detail_state = std::stoi(arguments_input[1]);
                if (detail > 1)
                {
                    std::cout << "Детали с id=" << detail << " не существует." << std::endl;
                    continue;
                }
                if (detail_state > 2)
                {
                    std::cout << "Состояния с id=" << detail_state << " не существует." << std::endl;
                    continue;
                }
                info_detail.first = Machine_detail(detail);
                info_detail.second = Machine_state(detail_state);
                list_broken_detail.push_back(info_detail);
            }
            else
            {
                std::cout << "Неверный ввод id состояния детали." << std::endl;
            }
        }
        else
        {
            std::cout << "Неверный ввод id детали." << std::endl;
        }
    }
    this->push_back(Request(id_machine, email, phone, name, surname,
                            patronymic, message, list_broken_detail));

    std::cout << "Запрос успешно добавлен в список запросов." << std::endl;
}

void Request_list::save() const
{
    std::ofstream out;
    out.open("C:\\QT\\projects\\machines\\requests.txt");
    out << "count=" << this->request_list.size() << "\n\n";

    std::vector<Request>::const_iterator iter = this->request_list.begin();
    while(iter != this->request_list.end())
    {
        std::ostringstream stream;
        std::vector<std::pair<Machine_detail, Machine_state>>::const_iterator iter_broken = iter->list_broken_detail.begin();
        while(iter_broken != iter->list_broken_detail.end())
        {
            stream << uint16_t(iter_broken->first) << "," << uint16_t(iter_broken->second) << '|';
            iter_broken++;
        }
        std::string broken_list = stream.str();

        out << "id=" << iter->id << '\n'\
            << "id_machine=" << iter->id_machine << '\n'\
            << "email=" << iter->email << '\n'\
            << "phone=" << iter->phone << '\n'\
            << "name=" << iter->name << '\n'\
            << "surname=" << iter->surname << '\n'\
            << "patronymic=" << iter->patronymic << '\n'\
            << "message=" << iter->message << '\n'\
            << "broken_list=" << broken_list << '\n' << std::endl;
        iter++;
    }
    out.close();
}

void Request_list::load()
{
    std::ifstream in("C:\\QT\\projects\\machines\\requests.txt");

    std::string count = "";
    std::getline(in, count, '=');
    std::getline(in, count, '\n');
    request_id_global = std::stoi(count);

    while(!in.eof())
    {
        Request req = Request();
        std::string tmp;

        std::getline(in, tmp, '=');
        if (tmp == "\n")
        {
            continue;
        }
        std::getline(in, tmp, '\n');
        req.id = std::stoi(tmp);

        std::getline(in, tmp, '=');
        std::getline(in, tmp, '\n');
        req.id_machine = std::stoi(tmp);

        std::getline(in, req.email, '=');
        std::getline(in, req.email, '\n');

        std::getline(in, req.phone, '=');
        std::getline(in, req.phone, '\n');

        std::getline(in, req.name, '=');
        std::getline(in, req.name, '\n');

        std::getline(in, req.surname, '=');
        std::getline(in, req.surname, '\n');

        std::getline(in, req.patronymic, '=');
        std::getline(in, req.patronymic, '\n');

        std::getline(in, req.message, '=');
        std::getline(in, req.message, '\n');

        std::getline(in, tmp, '=');
        std::getline(in, tmp, '\n');

        std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail;

        std::pair<Machine_detail, Machine_state> info_detail;
        char* ptr = strtok((char*)tmp.c_str(), "|");
        while (ptr != NULL)
        {
            char ptr_data[256];
            strcpy(ptr_data, ptr);
            char* it = ptr_data;
            while (*it != ',')
            {
                it++;
            }
            *it = '\0';
            info_detail.first = Machine_detail(std::stoi(ptr_data));

            it++;
            info_detail.second = Machine_state(std::stoi(it));

            ptr = strtok(NULL, "|");
            list_broken_detail.push_back(info_detail);
        }
        req.list_broken_detail = list_broken_detail;
        this->request_list.push_back(req);
    }
    in.close();
}

const Request* Request_list::get_by_id(const uint16_t id) const
{
    std::vector<Request>::const_iterator iter = this->request_list.begin();
    while(iter != this->request_list.end())
    {
        if (iter->id == id)
        {
            return &(*iter);
        }
        iter++;
    }
    return nullptr;
}

void help()
{
            std::cout << "Список команд:\n"\
                         "\t1. help - выводит это сообщение\n"\
                         "\t2. requests - выводит список всех запросов\n"\
                         "\t3. request n - выводит запрос по id\n"\
                         "\t4. machines - выводит список данных всех станков\n"\
                         "\t5. machine n - выводит данные станка по id\n"\
                         "\t6. create request - создать запрос\n"\
                         "\t7. create machine - создать станок\n"\
                         "\t8. change request n - изменить данные запроса по id\n"\
                         "\t9. change machine n - изменить данные станка по id\n"\
                         "\t10. exit - выход из программы\n";
}

int main()
{
    setlocale(LC_CTYPE, "rus");
    Machine_list machine_list = Machine_list();
/*
    std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail;

    std::pair<Machine_detail, Machine_state> info_detail;
    info_detail.first = Machine_detail::ENGINE;
    info_detail.second = Machine_state::BROKEN;
    list_broken_detail.push_back(info_detail);

    info_detail.first = Machine_detail::WEAR;
    list_broken_detail.push_back(info_detail);

    Request req = Request(list.machine_list[1].get_id(),
                          "kyamil@dadaya.domen",
                          "+88005553535",
                          "Кямиль",
                          "Великий",
                          "Невский",
                          "Сообщение о некоей проблеме",
                          list_broken_detail
    );
    Request req2 = Request(list.machine_list[0].get_id(),
                          "req2@dadaya.domen",
                          "+866666666666",
                          "Нестор",
                          "Махно",
                          "Иванович",
                          "О некоей проблеме",
                          list_broken_detail
    );
*/

    Request_list rq_list = Request_list();
//	rq_list.print();
//	rq_list.push_back(req);
//	rq_list.push_back(req2);

    help();
    std::vector<std::string> input;
    while (true)
    {
        std::cout << std::endl;
        input.clear();
        std::string _user_input = "";
        std::cout << "Введите команду: ";
        std::getline(std::cin, _user_input);

        // Разделение строки на аргументы
        std::istringstream istream(_user_input);
        std::string _tmp;
        while (std::getline(istream, _tmp, ' ')) {
            input.push_back(_tmp);
        }
        if (input.size() == 0)
        {
            continue;
        }
        std::cout << "input[0]=" << input[0] << std::endl;
        if (input.size() > 1)
        {
            std::cout << "input[1]=" << input[1] << std::endl;
        }
        if (input.size() > 2)
        {
            std::cout << "input[2]=" << input[2] << std::endl;
        }
        if (input[0] == "help")
        {
            help();
        }
        else if (input[0] == "requests")
        {
            rq_list.print();
        }
        else if (input[0] == "machines")
        {
            machine_list.print();
        }
        else if (input[0] == "exit")
        {
            return 0;
        }

        if (input.size() == 2)
        {
            if (is_number(input[1]))
            {
                if (input[0] == "request")
                {
                    const uint16_t rq_id = std::stoi(input[1]);
                    const Request* rq = rq_list.get_by_id(rq_id);
                    if (rq == nullptr)
                    {
                        std::cout << "Запроса по id=" << rq_id << " не существует." << std::endl;
                    }
                    else
                    {
                        rq->print();
                    }
                }
                else if (input[0] == "machine")
                {
                    const uint16_t machine_id = std::stoi(input[1]);
                    const Machine* machine = machine_list.get_by_id(machine_id);
                    if (machine == nullptr)
                    {
                        std::cout << "Запроса по id=" << machine_id << " не существует." << std::endl;
                    }
                    else
                    {
                        machine->print();
                    }
                }
            }
            if (input[0] == "create")
            {
                if (input[1] == "request")
                {
                    rq_list.create(machine_list);
                }
                else if (input[1] == "machine")
                {
                    machine_list.create();
                }
            }
        }
        else if (input.size() == 3)
        {
            if (input[0] == "change")
            {
                if (input[1] == "request")
                {
                    const_cast<Request*>(rq_list.get_by_id(std::stoi(input[2])))->change();
                    rq_list.save();
                }
                else if (input[1] == "machine")
                {
                    const_cast<Machine*>(machine_list.get_by_id(std::stoi(input[2])))->change();
                    machine_list.save();
                }
            }
        }
    }

    return 0;
}
