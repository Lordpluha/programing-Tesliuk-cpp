#pragma once

#include "entity.h"
#include <vector>

class List {
private:
    std::vector<Phone> phones;

public:
    // Додавання елемента
    void addPhone(const Phone& phone, size_t pos = 0);

    // Видалення елемента
    void removePhone(size_t index);

    // Отримання елемента по індексу
    Phone& getPhone(size_t index);

    // Виведення усіх елементів
    void print() const;

    // Метод обходу колекції (пошук самого дешевого телефону з заданою діагоналлю)
    const Phone& findCheapestPhone(float diagonal) const;
};
