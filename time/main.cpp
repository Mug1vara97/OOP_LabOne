#include "time.hpp"
#include <iostream>

int main() {
    // Создание объекта Time и установка времени
    Time t1(12, 30, 45);

    // Изменение времени с помощью методов класса
    t1.addHours(1);
    t1.addMinutes(15);
    t1.addSeconds(10);

    // Получение времени в разных форматах
    std::cout << "Время в секундах: " << t1.toSeconds() << std::endl;
    std::cout << "Время в часах: " << t1.toHours() << std::endl;
    std::cout << "Время в минутах: " << t1.toMinutes() << std::endl;
    std::cout << "Строковое представление времени: " << t1.toString() << std::endl;

    // Изменение значений часов, минут, секунд с помощью сеттеров
    t1.setHours(10);
    t1.setMinutes(20);
    t1.setSeconds(30);

    // Проверка равенства времен
    Time t2(10, 20, 30);
    if (t1.isEqual(t2)) {
        std::cout << "Времена равны" << std::endl;
    } else {
        std::cout << "Времена не равны" << std::endl;
    }

    return 0;
}