#include "list.h"
#include <cmath>

// Додавання елемента
void List::addPhone(const Phone& phone, size_t pos) {
    if (pos >= phones.size()) {
        phones.push_back(phone);
    } else {
        phones.insert(phones.begin() + static_cast<long>(pos), phone);
    }
}

// Видалення елемента
void List::removePhone(size_t index) {
    if (index < phones.size()) {
        phones.erase(phones.begin() + static_cast<long>(index));
    }
}

// Отримання елемента по індексу
Phone& List::getPhone(size_t index) {
    if (index >= phones.size()) {
        throw std::out_of_range("Index out of range");
    }
    return phones[index];
}

// Виведення усіх елементів
void List::print() const {
    for (const auto& phone : phones) {
        phone.print();
    }
}

// Метод обходу колекції (пошук самого дешевого телефону з заданою діагоналлю)
const Phone& List::findCheapestPhone(float diagonal) const {
    const Phone* cheapestPhone = nullptr;
    for (const auto& phone : phones) {
        if (std::fabs(phone.getScreenSize() - diagonal) < 1e-6) {
            if (cheapestPhone == nullptr || phone.getPrice() < cheapestPhone->getPrice()) {
                cheapestPhone = &phone;
            }
        }
    }
    if (cheapestPhone == nullptr) {
        throw std::runtime_error("No phone found with the given diagonal");
    }
    return *cheapestPhone;
}
