# Описание проекта "machine_tools_operation"

Проект **machine_tools_operation** представляет собой программное средство для управления оборудованием в промышленности. Он предоставляет пользователю возможность создавать, изменять и отслеживать состояние машин и заявок на их обслуживание.

## Структура проекта

- `main.cpp` - Главный файл программы.
- `functions.h` и `functions.cpp` - Файлы с общими функциями и утилитами.
- `machine.h` и `machine.cpp` - Классы для представления машин.
- `_machine.h` и `_machine.cpp` - Вспомогательные классы для манипулирования данными о машинах.
- `request.h` и `request.cpp` - Классы для представления заявок на обслуживание машин.
- `_request.h` и `_request.cpp` - Вспомогательные классы для манипулирования данными о заявках.
- `machine_state.h` - Перечисление для состояний машин.
- `machine_detail.h` - Перечисление для деталей машин.
- `machine_list.h` и `machine_list.cpp` - Классы для работы с списком машин.
- `request_list.h` и `request_list.cpp` - Классы для работы с списком заявок на обслуживание.
- `menu.h`, `menu.cpp` и `menu.ui` - Графический интерфейс программы.
- `allmachines.h`, `allmachines.cpp` и `allmachines.ui` - Форма для просмотра всех машин.
- `idmachine.h`, `idmachine.cpp` и `idmachine.ui` - Форма для просмотра и изменения информации о конкретной машине.
- `changemachine.h`, `changemachine.cpp` и `changemachine.ui` - Форма для изменения состояния машины.
- `allrequests.h`, `allrequests.cpp` и `allrequests.ui` - Форма для просмотра всех заявок на обслуживание.
- `idrequest.h`, `idrequest.cpp` и `idrequest.ui` - Форма для просмотра и изменения информации о конкретной заявке.
- `createrequest.h`, `createrequest.cpp` и `createrequest.ui` - Форма для создания новой заявки на обслуживание.
- `example.pro` - Файл проекта для Qt Creator.
- `example.pro.user` - Файл пользовательских настроек проекта для Qt Creator.
- `machines.bin` и `machines.bin-backup` - Файлы для хранения данных о машинах в бинарном формате.
- `requests.txt` и `requests.txt-backup` - Файлы для хранения данных о заявках на обслуживание в текстовом формате.

## Использование

1. Убедитесь, что у вас установлен [Qt Framework](https://www.qt.io/).
2. Откройте проект в Qt Creator.
3. Соберите и запустите example.pro.
4. Используйте графический интерфейс для взаимодействия с программой.

## Автор

[Keamil](https://github.com/Raphailinc)