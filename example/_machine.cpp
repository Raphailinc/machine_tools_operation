#include "_machine.h"
#include "allmachines.h"
#include "machine_list.h"

int _Machine::line;

_Machine::_Machine(const uint16_t belt_wear,
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

_Machine::~_Machine()
{
}

    Machine_state state;
    bool		 active;
    uint16_t	 id;
    uint16_t	 belt_wear;
    uint16_t	 engine_wear;
    uint16_t	 speed_engine;

void _Machine::print(QStandardItemModel *model) const
{
    std::stringstream stateStream;
    QStandardItem* item = 0;

    item = new QStandardItem(QString::number(this->id));
    model->setItem(line,0,item);
    stateStream << static_cast<int>(this->state);
    item = new QStandardItem(QString::fromStdString(stateStream.str()));
    model->setItem(line,1,item);
    item = new QStandardItem(QString::number(this->active));
    model->setItem(line,2,item);
    item = new QStandardItem(QString::number(this->belt_wear));
    model->setItem(line,3,item);
    item = new QStandardItem(QString::number(this->engine_wear));
    model->setItem(line,4,item);
    item = new QStandardItem(QString::number(this->speed_engine));
    model->setItem(line,5,item);
    line++;
}

QString _Machine::print() const
{
    std::stringstream storage;
    storage << "id: " << this->id << '\n'\
            << "Состояние: " << this->state << '\n'\
            << "Активен ли: " << this->active << '\n'\
            << "Состояние ремня: " << this->belt_wear << '\n'\
            << "Состояние двигателя: " << this->engine_wear << '\n'\
            << "Количество оборотов: " << this->speed_engine << std::endl;

    QString result = QString::fromStdString(storage.str());

    return result;
}

Machine_state _Machine::get_state() const
{
    return this->state;
}

void _Machine::set_state(const Machine_state state)
{
    this->state = state;
}

uint16_t _Machine::get_id() const
{
    return this->id;
}

uint16_t _Machine::get_belt_wear() const
{
    return this->belt_wear;
}

void _Machine::set_belt_wear(const uint16_t belt_wear)
{
    this->belt_wear = belt_wear;;
}

uint16_t _Machine::get_engine_wear() const
{
    return this->engine_wear;
}

void _Machine::set_engine_wear(const uint16_t engine_wear)
{
    this->engine_wear = engine_wear;;
}

uint16_t _Machine::get_speed_engine() const
{
    return this->speed_engine;
}

void _Machine::set_speed_engine(const uint16_t speed_engine)
{
    this->speed_engine = speed_engine;
}

void _Machine::change(QString _id, QString _state, QString _belt_wear,
                      QString _engine_wear, QString _speed_engine)
{
    while(true)
    {
        if((_id == nullptr) || (_state == nullptr) || (_belt_wear == nullptr) ||
                (_engine_wear == nullptr) || (_speed_engine == nullptr))
        {
            return;
        }
        break;
    }

    std::string input = _state.toStdString();
    uint8_t state;
    while (true)
    {
        if (is_number(input))
        {
            state = std::stoi(input);
            if (state > 2)
            {
                return;
            }
            break;
        }
    }

    uint64_t belt_wear;
    while (true)
    {
        input = _belt_wear.toStdString();
        if (is_number(input))
        {
            belt_wear = std::stoi(input);
            if (belt_wear > 65535)
            {
                return;
            }
            break;
        }
    }

    uint64_t engine_wear;
    while (true)
    {
        input = _engine_wear.toStdString();
        if (is_number(input))
        {
            engine_wear = std::stoi(input);
            if (engine_wear > 65535)
            {
                return;
            }
            break;
        }
    }

    uint64_t speed_engine;
    while (true)
    {
        input = _speed_engine.toStdString();
        if (is_number(input))
        {
            speed_engine = std::stoi(input);
            if (speed_engine > 65535)
            {
                return;
            }
            break;
        }
    }

    this->belt_wear = (uint16_t)belt_wear;
    this->engine_wear = (uint16_t)engine_wear;
    this->speed_engine = (uint16_t)speed_engine;
    this->state = (Machine_state)state;
}

