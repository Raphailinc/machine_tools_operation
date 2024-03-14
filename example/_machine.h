#ifndef _MACHINE_H
#define _MACHINE_H

#include <QStandardItemModel>
#include <QString>
#include "functions.h"

class _Machine
{
public:
    _Machine(const uint16_t belt_wear,
            const uint16_t engine_wear,
            const uint16_t speed_engine,
            const Machine_state state);
    ~_Machine();

    QString print() const;
    void print(QStandardItemModel *model) const;

    Machine_state get_state() const;
    void		  set_state(const Machine_state state);

    uint16_t get_id() const;

    uint16_t get_belt_wear() const;
    void	 set_belt_wear(const uint16_t belt_wear);

    uint16_t get_engine_wear() const;
    void	 set_engine_wear(const uint16_t engine_wear);

    uint16_t get_speed_engine() const;
    void	 set_speed_engine(const uint16_t speed_engine);

    void change(QString _id, QString _state, QString _belt_wear, QString _engine_wear, QString _speed_engine);

    static void change_var()
    {
        line = 0;
    }

protected:
    bool		 active;	// Работает ли сейчас
    uint16_t	 id;
    uint16_t	 belt_wear;		// Степень изношенности ремня
    uint16_t	 engine_wear;	// Степень изношенности двигателя
    uint16_t	 speed_engine;	// Кол-во оборотов
    Machine_state state;	// Состояние станка

private:
    static int line;
};

#endif // _MACHINE_H
